#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void echange(double *a, double *b);

int main()
{
    double a = 5.346, b = 3.756;
    int c = -2, d = 6;

    echange(&a, &b);
    assert( fabs(a - 3.756)<1e-6 && b == 5.346);

    echange(&a, &b);
    assert(a == 5.346 && b ==3.756);

    a = -2.852;
    b = 6.159;
    echange(&a, &b);
    assert(a == 6.159 && b == -2.852);

    echange(&a, &b);
    assert(a == -2.852 && b == 6.159);

    /* Ca marche parce que le compilateur convertit le int entré en paramètre en double */


    echange(&c, &d);
    assert(d == -2 && c == 6);

    return 0;
}


void echange(double *a, double *b)
{
    double c;

    c = *b;
    *b = *a;
    *a = c;
}

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void echange(int *a, int *b);

int main()
{
    int a = 5, b = 3;

    echange(&a, &b);
    assert(a == 3 && b == 5);

    echange(&a, &b);
    assert(a == 5 && b ==3);

    a = -2;
    b = 6;
    echange(&a, &b);
    assert(a == 6 && b == -2);

    echange(&a, &b);
    assert(a == -2 && b == 6);

    return 0;
}


void echange(int *a, int *b)
{
    int c;

    c = *b;
    *b = *a;
    *a = c;
}

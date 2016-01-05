#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void echangeTout(int type, void *a, void *b);

int main()
{
    double a = 5.346, b = 3.756;
    int c = -2, d = 6;
    char e = 'g', f = 'h';

    echangeTout(1,&a, &b);
    assert(a == 3.756 && b == 5.346);

    echangeTout(1,&a, &b);
    assert(a == 5.346 && b ==3.756);

    a = -2.852;
    b = 6.159;
    echangeTout(1,&a, &b);
    assert(a == 6.159 && b == -2.852);

    echangeTout(1,&a, &b);
    assert(a == -2.852 && b == 6.159);

    /* Ca marche parce que le compilateur convertit le int entré en paramètre en double */


    echangeTout(0,&c, &d);
    assert(d == -2 && c == 6);

    echangeTout(0,&c, &d);
    assert(d == 6 && c == -2);

    echangeTout(2,&e, &f);
    assert(e == 'h' && f == 'g');

    echangeTout(2,&e, &f);
    assert(e == 'g' && f == 'h');

    return 0;
}


void echangeTout(int type, void *a, void *b)
{
    switch(type)
    {
        case 0:
            {
                int c;
                c = *(int*)b;
                *(int*)b = *(int*)a;
                *(int*)a = c;
            }
                break;
        case 1:
            {
                double c;
                c = *(double*)b;
                *(double*)b = *(double*)a;
                *(double*)a = c;
            }
                break;
        case 2:
            {
                char c;
                c = *(char*)b;
                *(char*)b = *(char*)a;
                *(char*)a = c;
            }
                break;
    }
}

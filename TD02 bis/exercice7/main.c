#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int nbsol(int a, int b, int c);

int main()
{

    assert( nbsol(1, 4 , 3) == 2);
    assert( nbsol(1, 1 , -2) == 2);
    assert( nbsol(1, 1 , 1) == 0);
    assert( nbsol(4, 4 , 1) == 1);

    return 0;
}


int nbsol(int a, int b, int c)
{
    int delta;

    delta = b*b - 4*a*c;
    if(delta == 0)
    {
        return 1;
    }
    else if(delta > 0)
    {
        return 2;
    }
    else if (delta < 0)
    {
        return 0;
    }


}

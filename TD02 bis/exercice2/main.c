#include <stdio.h>
#include <assert.h>


int factorielle(int nb);

int main(void)
{
    assert( factorielle(2) == 2);
    assert( factorielle(4) == 24);
    assert( factorielle(3) == 19);



    return 0;

}

int factorielle(int nb)
{
    int fac = 1, i;
    for ( i=1 ; i <= nb ; i++ )
    {
        fac=fac*i;

    }
    return(fac);
}

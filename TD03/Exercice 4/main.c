#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int maxVal(int tab[4]);


int main()
{
    int tab1[4]={1,2,3,4}, tab2[4]={1,7,3,4}, tab3[4]={-10,-2,-3,-4};

    assert( maxVal(tab1) == 4);
    assert( maxVal(tab2) == 7);
    assert( maxVal(tab3) == -2);

    return 0;
}


int maxVal(int tab[4])
{
    int i = 1, max = tab[0];
    for(; i < 4; i++)
    {
        if(max < tab[i])
            max = tab[i];
    }

    return(max);
}

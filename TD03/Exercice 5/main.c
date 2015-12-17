#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int maxminVal(int tab[4], int *res1, int *res2);


int main()
{
    int max =0, min = 0;
    int tab1[4]={1,2,3,4}, tab2[4]={1,7,3,4}, tab3[4]={-10,-2,-3,-4};

    maxminVal(tab1, &min, &max);
    assert(max == 4);
    assert(min == 1);

    maxminVal(tab2, &min, &max);
    assert(max == 7);
    assert(min == 1);

    maxminVal(tab3, &min, &max);
    assert(max == -2);
    assert(min == -10);

    return 0;
}


int maxminVal(int tab[4], int *res1, int *res2)
{
    int i = 1;
    *res1 = tab[0];
    *res2 = tab[0];
    for(; i < 4; i++)
    {
        if(*res2 < tab[i])
            *res2 = tab[i];
        if(*res1 > tab[i])
            *res1 = tab[i];
    }


}

 int maxminVal(int tab[4]);


int main()
{
    int tab1[4]={1,2,3,4}, tab2[4]={1,7,3,4}, tab3[4]={-10,-2,-3,-4};

    maxminVal(tab1);

    return 0;
}


int maxminVal(int tab[4])
{
    int i = 1, max = tab[0], min = tab[0];
    for(; i < 4; i++)
    {
        if(max < tab[i])
            max = tab[i];
        if(min > tab[i])
            min = tab[i];
    }

    printf("Max: %d et Min: %d", max, min);
}

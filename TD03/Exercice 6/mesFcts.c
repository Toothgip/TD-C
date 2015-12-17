#include "mesFcts.h"


void research(int tab[4])
{
    int max1, max2;

    int i;


    max1 = tab[0];
    max2 = tab[0];


    for(i = 1; i < 4; i++)
    {
        if(max1 <= tab[i])
        {
            max2 = max1;
            max1 = tab[i];
        }
    }
    printf("Max1 = %d, Max2 = %d\n\n", max1, max2);

}

void researchVariant(int tab[4], int *max1, int *max2)
{
    int i, ipp = 0;

    *max1 = tab[0];
    *max2 = tab[0] - 9999999999999999999999999999;


    for(i = 1; i < 4; i++)
    {
        if(*max1 <= tab[i])
        {
            *max1 = tab[i];
            ipp = i;
        }

    }

    for( i = 0; i <4 ; i++)
    {
        if(*max2 <= tab[i] && i != ipp)
        {
            *max2 = tab[i];
        }


    }


}

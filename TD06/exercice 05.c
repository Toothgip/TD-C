#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sapin(char*, int);

int main()
{
    char tab1[]="tagada tsointsoin";

    sapin(tab1, 1);

    printf("\n\n");

    sapin(tab1, -1);

    printf("\n\n");

    sapin(tab1, 1);
    sapin(tab1, -1);

    printf("\n\n");

    sapin(tab1, -1);
    sapin(tab1, 1);

    return 0;
}

void sapin(char *tab1, int mod)
{
    char tab2[20];
    char* adresse = tab1;
    char* ptab2 = tab2;
    int i, j;

    if(mod == 1)
    {
        i = 0;
    }
    else
    {
        i = 8;
    }

    for(; mod == 1 && i < 9 || mod == -1 && i >= 0;)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(; j < 17-i; j++)
        {
            printf("%c", *(tab1+j));
        }
        for(; j < 17; j++)
        {
            printf(" ");
        }
        printf("\n");

        i = i + mod;
    }
}

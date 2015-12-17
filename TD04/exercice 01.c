#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


void rempliTailleFixe(int tab[5][8]);
void afficheTailleFixe(int tab[5][8]);

int main()
{
    int tab[5][8];

    rempliTailleFixe(tab);
    afficheTailleFixe(tab);

    return 0;
}

void rempliTailleFixe(int tab[5][8])
{
    int i, j;
    srand(time(NULL));
    for(i=0; i<5; i++)
    {
        for(j=0; j<8; j++)
        {
            tab[i][j] = rand() % 100;
        }
    }
}

void afficheTailleFixe(int tab[5][8])
{
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%02d, ", tab[i][j]);
        }
        printf("\n");
    }
}

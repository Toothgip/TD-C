#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>



void rempliTab(int t1, int t2, int tab[t1][t2]);
int ptsCol(int t1, int t2, int tab[t1][t2]);

int main()
{
    int t1 = 3, t2 = 3;
    int tab[3][3];

    rempliTab(t1,t2,tab);
    /* ptsCol(t1,t2,tab); */

    return 0;
}

void rempliTab(int t1, int t2, int tab[t1][t2])
{
    int i, j;
    long compteur = 1, cpt=0;

    srand(time(NULL));
    for(i=0; i<t1; i++)
    {
        for(j=0; j<t2; j++)
        {
            tab[i][j] = rand() % 99;
            printf("%02d, ", tab[i][j]);
        }
        printf("\n");
    }

    while(ptsCol(t1,t2,tab) == 0)
    {
        srand(time(NULL));
        for(i=0; i<t1; i++)
        {
            for(j=0; j<t2; j++)
            {
                tab[i][j] = rand() % 99;
                printf("%02d, ", tab[i][j]);
            }
            printf("\n");
        }
        compteur++;
    }
    printf("%ld tableaux generes", compteur);

}

int ptsCol(int t1, int t2, int tab[t1][t2])
{
    int i, j, k, mini, pcol = 0;
    for(j=0; j<t2; j++)
    {
        mini = tab[0][j];
        for(k=0; k<t1; k++) /* determine le minimum de la colonne */
        {
            if(mini > tab[k][j])
            {
                mini = tab[k][j];
                /* pcol = 1; */
            }
        }
        for(i=0; i<t1; i++) /* on regarde chaque élément de cette colonne et on voit s'il est égal au minimum */
        {
            if(mini == tab[i][j])
            {
                for(k=0; k<t2 && tab[i][j] >= tab[i][k]; k++) /* on on vérifie que cet élément-là est le maximum de sa ligne */
                {
                }
                if(k == t2)
                {
                    printf("%d en position %d:%d est un point-col\n", tab[i][j], i, j);
                    pcol = 1;

                }
            }
        }
    }
    printf("Tableau analyse.\n\n");
    return pcol;
}

/* Boucle principale j
Boucle secondaire i

Traduction : on détermine d'abord le minimum de la colonne puis si c'est un maximum dans sa ligne */

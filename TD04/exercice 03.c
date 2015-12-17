#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


void rempliTab(int t1, int t2, int tab[t1][t2]);
int estDiagonal(int t1, int t2, int tab[t1][t2]);

int main()
{
    int t1 = 3, t2 = 3;
    int tab[3][4] = {{123,0,0},{0,12,0},{0,0,52}};

    /*rempliTab(t1,t2,tab);*/
    printf("%d", estDiagonal(t1,t2,tab));

    return 0;
}

void rempliTab(int t1, int t2, int tab[t1][t2])
{
    int i, j;
    srand(time(NULL));
    for(i=0; i<t1; i++)
    {
        for(j=0; j<t2; j++)
        {
            tab[i][j] = rand() % 100;
        }
    }
}

int estDiagonal(int t1, int t2, int tab[t1][t2])
{
    int i, j;
    for(i=0; i<t1; i++)
    {
        for(j=0; j<t2; j++)
        {
            if(j != i && tab[i][j] != 0)
            {
                return(0);
            }
        }
    }
    return(1);
}

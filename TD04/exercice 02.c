#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


void rempliTab(int t1, int t2, int tab[t1][t2]);
void afficheTab(int t1, int t2, int tab[t1][t2]);

int main()
{
    int t1 = 8, t2 = 10;
    int tab[t1][t2];

    rempliTab(t1,t2,tab);
    afficheTab(t1,t2,tab);

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

void afficheTab(int t1, int t2, int tab[t1][t2])
{
    int i, j;
    for(i=0; i<t1; i++)
    {
        for(j=0; j<t2; j++)
        {
            printf("%02d, ", tab[i][j]);
        }
        printf("\n");
    }
}

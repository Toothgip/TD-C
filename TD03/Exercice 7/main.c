#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void inserTri(int taille, int tab[taille]);

int main()
{
    int i;
    int tab1[5]={5,1,3,2,4}, tab2[4]={-5,0,-3,4}, tab3[6]={-1,-2,-3,-4,-5,-6};
    int tabRes1[5] = {1,2,3,4,5}, tabRes2[4]={-5,-3,0,4}, tabRes3[6]={-6,-5,-4,-3,-2,-1};

    inserTri(5, tab1);
    inserTri(4, tab2);
    inserTri(6, tab3);
    for(i=0; i<5; i++)
    {
        assert(tab1[i] == tabRes1[i]);
        assert(tab2[i] == tabRes2[i]);
        assert(tab3[i] == tabRes3[i]);
    }






    return 0;
}

void inserTri(int taille, int tab[taille])
{
    int i, j, nb;
    for(i=0; i<taille; i++)
    {
        nb = tab[i];
        for(j=i-1; j>=0 && nb<tab[j]; j--)
        {
            tab[j+1] = tab[j];
        }
        tab[j+1] = nb;
    }
}

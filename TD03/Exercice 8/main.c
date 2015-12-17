#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void inserTri(int taille, float tab[taille]);

int main()
{
    int i;
    float tab1[5]={5.2f,1,3.1f,2,4.6f}, tab2[4]={-5.1f,0,-3,-5.2f}, tab3[6]={-1,-2.4f,-3.0f,-3.5f,-5,-6};
    float tabRes1[5] = {1,2,3.1f,4.6f,5.2f}, tabRes2[4]={-5.2f,-5.1f,-3,0}, tabRes3[6]={-6,-5,-3.5f,-3.0f,-2.4f,-1};

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

void inserTri(int taille, float tab[taille])
{
    int i, j;
    float nb;
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

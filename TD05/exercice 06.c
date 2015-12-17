#include <stdio.h>
#include <stdlib.h>
#define TAILLE 12

void remplissage(int *Pt, int nbcases);
void affichage(int *Pt, int nbcases);
void essai(int *Pt, int nb);

int main()
{
    int tablo[TAILLE][TAILLE], *Pt = tablo;

    printf("La taille du tableau : %d octets\n", sizeof(tablo));
    printf("La taille du pointeur sur le tableau : %d octets\n", sizeof(Pt));

    /* La taille du tableau est égale à la taille d'une case multipliée par le nombre de cases.
        Alors que la taille du pointeur n'est égale qu'à la taille d'une case, logique puisque le pointeur
        ne pointe que sur la première case du tableau (tablo[0]) */


    remplissage(tablo, TAILLE*TAILLE);

    affichage(tablo, TAILLE*TAILLE);

    printf("\n");
    essai(tablo, TAILLE*TAILLE);

    return 0;
}


void remplissage(int *Pt, int nbcases)
{
    int i= 0;

    for (i= 0; i < nbcases; i++)
    {
        *(Pt+i) = i;
    }

}

void affichage(int *Pt, int nbcases)
{
    int i= 0;

    for (i= 0; i < nbcases; i++)
    {
        printf("%d\n", *(Pt+i));
    }

}

void essai(int *Pt, int nb)
{
    int i, j=0;

    for(i = 0; i < 3; i++)
    {
        for(; j < 4*(i+1); j++)
        {
            printf("%d, ", *(Pt+j));
        }

        printf("\n");
    }
}

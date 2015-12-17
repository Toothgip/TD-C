#include <stdio.h>


int main(void)
{
    int  annee = 1512;

    while(annee>=1512 && annee<=3199)
    {

    printf("Entrer une annee comprise 1512 et 3199\n");
    scanf("%d", &annee);

    if((annee % 4 == 0 && annee %100 != 0) || (annee % 400 == 0) )
    {
        printf("L'annee %d est une annee bissextile.\n\n", annee);
    }
    else
        printf("L'annee %d n'est pas une annee bissextile.\n\n", annee);

    }

    return 0;

}

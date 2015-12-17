#include <stdio.h>


int main(void)
{
    int  annee = 1512;

    printf("Entrer une annee comprise 1512 et 3199\n");
    scanf("%d", &annee);

    printf("L'annee est bissextile : %d", bissex(annee));

    return 0;
}


int bissex(int annee)
{
    if((annee % 4 == 0 && annee %100 != 0) || (annee % 400 == 0) )
    {
        return(1);
    }
    else
        return(0);
}

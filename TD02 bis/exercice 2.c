#include <stdio.h>


int factorielle(int nb);

int main(void)
{
    int fac, nb;
    printf("Quelle factorielle voulez-vous ?\n");
    scanf("%d", &nb);

    fac = factorielle(nb);

    printf("La factorielle de %d est egale a %d",nb,fac);

    return 0;

}

int factorielle(int nb)
{
    int fac = 1, i;
    for ( i=1 ; i <= nb ; i++ )
    {
        fac=fac*i;

    }
    return(fac);
}

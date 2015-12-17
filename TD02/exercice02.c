#include <stdio.h>


int main(void)
{
    int fac=1, i, nb;
    printf("Quelle factorielle voulez-vous ?\n");
    scanf("%d", &nb);
    for ( i=1 ; i <= nb ; i++ )
    {
        fac=fac*i;

    }

    printf("La factorielle de %d est egale a %d",nb,fac);

    return 0;

}

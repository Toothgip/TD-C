#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *caractere;
    int *entier;
    double *grosfloat;

    printf("Taille d'un pointeur caractere : %d octets\n", sizeof(caractere));
    printf("Taille d'un pointeur entier : %d octets\n", sizeof(entier));
    printf("Taille d'un pointeur double : %d octets\n", sizeof(*grosfloat));

    return 0;
}

/* Ces tailles sont coh�rentes puisque les variables ne contiennent que des adresses.
    Donc que la variable point�e soit grande ou petite, son adresse a toujours la m�me taille.
*/

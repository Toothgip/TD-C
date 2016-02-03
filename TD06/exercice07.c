#include <stdlib.h>
#include <stdio.h>

long ROBUSTE_ENTIER();

int main()
{
    /* Q1: strtol converti une chaine de caractère en long int elle prends en argumant
    une chaine de caractere,
    un pointer de type charpour parcourir la chaine caractere par caractere
    et un int qui designe la base du nombre a renvoyé */


    /* Q3: Il existe la fonction strtod qui converti une chaine de caractère en double */


    printf("\n La valeur rentre est %ld", ROBUSTE_ENTIER());


    return 0;
}

long ROBUSTE_ENTIER()
{
    char entree[100];
    char *ptr;
    printf("Entrer une valeur 100 caractere maximum\n");

    scanf("%s", entree);

    while( (strtol(entree, &ptr, 10) == 0  ||  strtol(entree, &ptr, 10) != 0) && *ptr != 0)
    {
        printf("\nErreur veuillez rentrer un nombre !!\n");
        printf("Entrer une valeur 100 caractere maximum\n");
        scanf("%s", entree);
    }

    return strtol(entree, &ptr, 10);


}

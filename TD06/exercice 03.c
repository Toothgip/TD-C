#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE1 50
#define TAILLE2 19
#define TAILLE3 20

char* concatenation(int, int, char*, char*);

int main()
{
    int t1 = TAILLE1, t2 = TAILLE2, t3 = TAILLE3;
    char tab2[TAILLE2] = "monseigneur", tab1[TAILLE1] = "Salutations ", tab3[TAILLE3] = "Salut";


    puts(concatenation(t1, t2, tab1, tab2));
    printf("\n");

    puts(concatenation(t3, t2, tab3, tab2));
    printf("\n");


    return 0;
}

char* concatenation(int t1, int t2, char *tab1, char *tab2)
{
    char* adresse = tab1;

    if(longueur(tab1)+t2 <= t1)
    {

        for(; *tab1!='\0'; tab1++)
        {}
        for(; *tab2 != '\0'; tab2++ && tab1++)
        {
            *tab1 = *tab2;
        }
        *tab1 = '\0';
    }
    else
        printf("Erreur, chaine 1 plus petite que chaine 2.\nChaine 1 retournee sans modification\n");

    return adresse;
}

int longueur(char *tab)
{
    int cpt=0;
    for(;*tab!='\0';tab++ && cpt++)
    {

    }
    return cpt;
}

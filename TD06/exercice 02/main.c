#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define TAILLE1 19
#define TAILLE2 19
#define TAILLE3 12

int copie(int, int, char*, char*);

int main()
{
    int t1 = TAILLE1, t2 = TAILLE2, t3 = TAILLE3;
    char tab2[TAILLE2] = "Coucou les gens !", tab1[TAILLE1] = "", tab3[TAILLE3] = "";

    assert(strnicmp(copie(t1, t2, tab1, tab2), tab2, t1) == 0);

    assert(strnicmp(copie(t3, t2, tab3, tab2), tab2, t3) < 0);

    return 0;
}

int copie(int t1, int t2, char *tab1, char *tab2)
{
    int adresse = tab1;
    if(t1>=t2)
    {
        for(; *tab2!='\0'; tab2++ && tab1++) *tab1 = *tab2;
    }
    else
        printf("Erreur, chaine 1 plus petite que chaine 2.\nChaine 1 retournee sans modification\n");

    *tab1 = '\0';

    return adresse;
}

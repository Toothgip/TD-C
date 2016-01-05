#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int longueur(char *tab);

int main()
{
    char tab[]="Bonjour";

    char tab1[]="Salut";

    char tab2[]="Pierre-Elliott Thiboud";

    assert(longueur(tab) == 7);

    assert(longueur(tab1) == 5);

    assert(longueur(tab2) == 22);

    return 0;
}

int longueur(char *tab)
{
    int cpt=0;
    for(;*tab!='\0';tab++ && cpt++)
    {

    }
    return cpt;
}

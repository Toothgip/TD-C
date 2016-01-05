#include <stdlib.h> /* rand, malloc, free */
#include <time.h> /* time */

int ROBUSTE_ENTIER(void);

int main(void)
{
    int taille = 20, i ;

    int* tab ;
    int * ad ;

    taille = ROBUSTE_ENTIER() ;

    tab = (int*)malloc(taille*sizeof(int)) ;
    if( tab==NULL )
    {
        printf("Memory allocation failed.\n") ;
        exit(EXIT_FAILURE) ;
    }

    srand(time(NULL));

    /* syntaxe tableau */
    for(i=0; i<taille; i++)
        tab[i] = rand()%100 - 9 ;

    /* syntaxe pointeur */
    for(ad=tab; ad<tab+taille; ad++)
        *ad = rand()%100 - 9 ;

    for(i=0; i<taille; i++)
        printf("%d ", tab[i]) ;

    printf("\n") ;

    printf("adresse du tableau tab = %p\n", tab) ;

    free(tab) ;

    return EXIT_SUCCESS ;
}

int ROBUSTE_ENTIER()
{
    char ligne_saisie[256]="a"; /* mauvaise init */
    int nb_param_bien_saisis=0;
    int n; /* entier à saisir */
    do
    {
        if(strcmp(ligne_saisie,"")!=0) /* pour éviter un nouvel affichage lié à la lecture du dernier retour chariot */
           printf("Saisir un entier au clavier : ");
        gets(ligne_saisie);
        nb_param_bien_saisis = sscanf(ligne_saisie, "%d", &n);
    }while(nb_param_bien_saisis<1) ;

    return n;
}

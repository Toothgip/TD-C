#include <stdlib.h> /* rand, malloc, free */
#include <time.h> /* time */

int main(void)
{
    int taille = 10, i ;

    int *tablo1, *tablo2 , *tablo3 ;
    int * ad ;

    tablo1 = (int*)malloc(taille*sizeof(int)) ;

    tablo2 = (int*)malloc(taille*sizeof(int)) ;

    tablo3 = (int*)malloc(taille*sizeof(int)) ;

    if( tablo1 ==NULL ||  tablo2 ==NULL || tablo3 ==NULL )
    {
        printf("Memory allocation failed.\n") ;
        exit(EXIT_FAILURE) ;
    }

    srand(time(NULL));

    /* Remplissage  des tableau */
    for(i=0; i<taille; i++)
    {
        tablo1[i] = rand()%100 - 9 ;
        tablo2[i] = rand()%100 - 9 ;
        tablo3[i] = rand()%100 - 9 ;
    }


    /* Affichage des tableau */

    printf("tablo1: ");

    for(i=0; i<taille; i++) /* Tablo1 */
    {
        printf("%d ", tablo1[i] );
    }

    printf("\ntablo2: ");

    for(i=0; i<taille; i++) /* Tablo2 */
    {
        printf("%d ", tablo2[i] );
    }

    printf("\ntablo3 :");

    for(i=0; i<taille; i++) /* Tablo3 */
    {
        printf("%d ", tablo3[i] );
    }

    /* Affichage des adresses */


    printf("\nadresse du tableau tablo1 = %p\n", tablo1) ;

    printf("\nadresse du tableau tablo2 = %p\n", tablo2) ;

    printf("\nadresse du tableau tablo3 = %p\n", tablo3) ;

    realloc(tablo2, 20);

    printf("\nTablo2: ");
    for(i=0; i<taille+10; i++) /* Tablo2 */
    {
        printf("%d ", tablo2[i] );
    }
    printf("\n Adresse du tableau tablo2 = %p\n", tablo2) ;



    free(tablo1) ;

    free(tablo2) ;

    free(tablo3) ;

    return EXIT_SUCCESS ;
}

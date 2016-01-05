#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Nb1=10, *Pt1=&Nb1;
    double Nb2=35.326, *Pt2=&Nb2;

    printf("Nb1 = %d\n", Nb1);              /* Affiche la valeur de Nb1 */
    printf("Pt1 = %d\n", Pt1);              /* Affiche l'adresse de Nb1 */
    printf("Pt1 + 1 = %d\n", Pt1 + 1);      /* Affiche l'adresse de l'int suivant Nb1 */
    printf("*Pt1 = %d\n", *Pt1);            /* Affiche la valeur de Nb1 */
    printf("*Pt1 + 1 = %d\n", *Pt1 + 1);    /* Affiche la valeur de Nb1 + 1 */
    printf("*(Pt1+1) = %d\n", *(Pt1+1));    /* Affiche la valeur à l'adresse de l'int suivant Nb1 */

    printf("\n");

    printf("Nb2 = %f\n", Nb2);              /* Affiche la valeur de Nb2 */
    printf("Pt2 = %d\n", Pt2);              /* Affiche l'adresse de Nb2 */
    printf("Pt2 + 1 = %d\n", Pt2 + 1);      /* Affiche l'adresse du double suivant Nb2 */
    printf("*Pt2 = %f\n", *Pt2);            /* Affiche la valeur de Nb2 */
    printf("*Pt2 + 1 = %f\n", *Pt2 + 1);    /* Affiche la valeur de Nb2 + 1 */
    printf("*(Pt2+1) = %f\n", *(Pt2+1));    /* Affiche la valeur à l'adresse du double suivant Nb2 */
                                            /* Comme on souhaite afficher un float */
    return 0;
}

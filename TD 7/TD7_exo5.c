#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ROBUSTE_ENTIER(void);

void affiche_contenu_tab_1D_int(int*, int);

void affiche_adresse_tab_int(int*);

void remplir_tab_1D_int(int*, int);

int * alloue_tab_1D_int(int);

int * modifie_taille_allouee_tab_1D_int(int*, int);
int * insertion_tab_1D_int(int*, int*);
int * suppression_tab_1D_int(int*, int*);

void libere_tab_1D(int*);

void trier( int [], int);

void recherche_derniere_occ_tab_1D_int(int*, int);

int main(void)
{
	 int * tab;
     int taille = ROBUSTE_ENTIER();
     char choix='l';

     /* même si ça n'est pas demandé, je propose un tableau de départ avant de rentrer dans le menu de l'exo 5 */
     tab = alloue_tab_1D_int(taille);

     if(tab==NULL)
     {
         printf("L'allocation dynamique du tableau d'entiers a echoue.\n");
         return;
     }
     remplir_tab_1D_int(tab, taille);
     affiche_contenu_tab_1D_int(tab, taille);

     /* le menu */
     do
     {
           printf("\ta : remplissage du tableau avec des nombres compris entre -9 et 90\n");
           printf("\tb : affichage du tableau\n");
           printf("\tc : tri croissant du tableau\n");
           printf("\td : insertion d'un element dans le tableau\n");
           printf("\te : suppression d'un element du tableau : chaque occurrence est supprimee\n");
           printf("\tf : recherche de la derniere occurrence d'un element et affichage de l'indice de sa case\n");
           printf("\tq ou Q : quitter\n");

           scanf(" %c", &choix);

           switch(choix)
           {
           case 'a' :
                remplir_tab_1D_int(tab, taille);
                break;


           case 'b' :
                affiche_contenu_tab_1D_int(tab, taille);
                break;

           case 'c' :
                trier(tab, taille);
                break;

           case 'd' :
                tab=insertion_tab_1D_int(tab, &taille);
                break;

           case 'e' :
                tab=suppression_tab_1D_int(tab, &taille);
                break;

           case 'f' :
                recherche_derniere_occ_tab_1D_int(tab, taille);
                break;

           case 'q' :
           case 'Q' :
                printf("Merci et au revoir!\n");
                break;
           default :
                printf("Saisie incorrecte!\n");
           }

     }while(choix!='q' && choix!='Q');

     libere_tab_1D(tab);

	 return EXIT_SUCCESS ;
}


void affiche_contenu_tab_1D_int(int* tab1D, int nb_cases)
{
     int cpt=0;
     if(nb_cases <=0 || tab1D==NULL) return; /* cas de mauvaise utilisation ou d'un tableau vide */

    /*

	A COMPLETER

	*/
}

void affiche_adresse_tab_int(int* tab)
{
     printf("L'adresse du tableau est %p :\n", tab);
     printf("\t %p en precedant l'indentifiant du tableau de & (on obtient l'dresse du pointeur local a la fonction affiche_adresse_tab_int\n", &tab);
     if(tab!=NULL)
        printf("\t %p en accedant a l'adresse de la 1ere case)\n", &(*tab));
}

void remplir_tab_1D_int(int* tab1D, int nb_cases)
{
     int cpt=0;
     if(nb_cases <=0 || tab1D==NULL) return; /* cas de mauvaise utilisation ou d'un tableau vide */

	 srand(time(NULL));

    /*

	A COMPLETER

	*/
}

/* alloue_tab_1D_int alloue un tableau de nb_cases, et pour facilité son utilisation, en particulier
   ne pas perdre l'adresse du début de la zone mémoire allouée, nous avons choisi de retourner cette adresse.
*/
int * alloue_tab_1D_int(int nb_cases)
{
    int *tab=NULL;
    if(nb_cases<=0) return tab; /* pas d'allocation, car cas problématique */

    tab = (int*) calloc(nb_cases, sizeof(int)); /* allocation et initialisation à 0 des octets allouées. malloc n'aurait rien initialisé. */

    return tab; /* le cas de l'allocation qui échoue sera traité dans la fonction appelante. */
}

/* Ici tab1D est une variable de type pointeur qui contient l'adresse du début d'un tableau alloué.
   Cette adresse est supposée valide (pré-condition) si elle est différente de NULL. */
void libere_tab_1D(int* tab1D)
{
     if(tab1D!=NULL) free(tab1D);
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

void trier( int tab_arg[], int nb_case )
{
     int i, j, tmp;
     if(nb_case<=1 || tab_arg==NULL) return ;

     for(i=0; i<=nb_case-2; i++) /* nombre de remontée des bulles */
     {
         for(j=0; j<nb_case-1-i; j++) /* les cases dans ]nb_case-1-i;nb_case-1] sont triées */
         {
              if(tab_arg[j] > tab_arg[j+1])
              {
                  tmp = tab_arg[j+1];
                  tab_arg[j+1] = tab_arg[j];
                  tab_arg[j] = tmp;
              }
         }
     }
}


int * modifie_taille_allouee_tab_1D_int(int* tab_origine, int nouvelle_taille)
{
    int* tab_tmp;

    if(nouvelle_taille<=0 || tab_origine==NULL) return ; /* cas de mauvaise utilisation */

    tab_tmp = (int*)realloc(tab_origine, nouvelle_taille * sizeof(int));
    if(tab_tmp==NULL)
    {
        /* la réallocation a échouée, on affiche un message d'erreur et on retourn l'ancien tableau
           non modifié */
        printf("La modification de la taille du tableau a echoue, on conserve l'ancien tableau.\n");

        /*return tab_origine;*/ /* je préfère gérer cette erreur dans la fonction appelante, pas directement ici! */
    }

    return tab_tmp;
}

/* on ne traite le cas que du tableau trié (cf. le NB) */
int * insertion_tab_1D_int(int* tab_origine, int* taille)
{
    int i, e;
    int* tab_tmp;

    if(*taille<0) return tab_origine;

    if(tab_origine==NULL)
    {
        *taille=0;
        tab_tmp = alloue_tab_1D_int(1);
    }
    else
    {
        tab_tmp = modifie_taille_allouee_tab_1D_int(tab_origine, *taille+1);
    }

    if(tab_tmp==NULL)
    {
        return tab_origine;
    }

    printf("\n SAISIE DE l'ELEMENT A INSERER.\n");
    e=ROBUSTE_ENTIER();

    /*

	A COMPLETER

	*/


    (*taille)++; /* on met à jour la nouvelle taille */

    return tab_tmp;
}

int * suppression_tab_1D_int(int* tab_origine, int* taille)
{
    int e;
    int* tab_tmp=NULL;
    int nouvelle_taille=*taille, i, j;

    if(*taille<=0 || tab_origine==NULL) return tab_origine;

    printf("\n SAISIE DE l'ELEMENT A SUPPRIMER.\n");
    e=ROBUSTE_ENTIER();

    /*

	A COMPLETER

	*/

    if(nouvelle_taille==*taille)
    {/* cas où il n'y a rien à supprimer */
       return tab_origine;
    }

    if(nouvelle_taille==0)
    {
       libere_tab_1D(tab_origine);
       *taille=0;
       return tab_tmp; /* tab_tmp==NULL */
    }

    tab_tmp = modifie_taille_allouee_tab_1D_int(tab_origine, nouvelle_taille); /* ici nouvelle_taille>=1 */
                                                                               /* normalement aucun pb, car on veut un bloc mémoire avec moins d'éléments qu'avant! */
    *taille=nouvelle_taille;

    return tab_tmp;
}


void recherche_derniere_occ_tab_1D_int(int* tab_origine, int taille)
{
  /*

	A COMPLETER

	*/
}

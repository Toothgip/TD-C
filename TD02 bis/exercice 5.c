#include <stdio.h>

void ecriture(char chiffre);

int main(void)
{
    char  chiffreA;

    printf("Entrer un chiffre\n");
    scanf(" %c", &chiffreA);

    ecriture(chiffreA);

    return 0;

}


void ecriture(char chiffre)
{
        switch(chiffre)
    {
        case '0' :      printf("ZERO\n\n");
                        break;
        case '1' :      printf("UN\n\n");
                        break;
        case '2' :      printf("DEUX\n\n");
                        break;
        case '3' :      printf("TROIS\n\n");
                        break;
        case '4' :      printf("QUATRE\n\n");
                        break;
        case '5' :      printf("CINQ\n\n");
                        break;
        case '6' :      printf("SIX\n\n");
                        break;
        case '7' :      printf("SEPT\n\n");
                        break;
        case '8' :      printf("HUIT\n\n");
                        break;
        case '9' :      printf("NEUF\n\n");
                        break;
        default :       printf("Erreur !\n\n");
                        break;
    }

}

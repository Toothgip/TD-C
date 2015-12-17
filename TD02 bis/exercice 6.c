#include <stdio.h>

void afficheHeure(int date);

int main(void)
{
    int dateA;
    printf("Entrez la date sous la forme JJMMYY:\n");
    scanf("%d", &dateA);

    afficheHeure(dateA);

    return 0;
}


void afficheHeure(int date)
{
    int annee, mois, jour;
    annee = date-100*(date/100);
    mois = date/100-100*(date/10000);
    jour = date/10000;

    printf("%02d ", jour);

    switch(mois)
    {
        case 1 :      printf("janvier");
                        break;
        case 2 :      printf("fevrier");
                        break;
        case 3 :      printf("mars");
                        break;
        case 4 :      printf("avril");
                        break;
        case 5 :      printf("mai");
                        break;
        case 6 :      printf("juin");
                        break;
        case 7 :      printf("juillet");
                        break;
        case 8 :      printf("aout");
                        break;
        case 9 :      printf("septembre");
                        break;
        case 10 :     printf("octobre");
                        break;
        case 11 :     printf("novembre");
                        break;
        case 12 :     printf("decembre");
                        break;
    }
    printf(" 20%2d", annee);
}

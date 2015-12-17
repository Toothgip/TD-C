#include <stdio.h>
#include <math.h>


int main(void)
{
    int  a = 1, b = 0, c = 0, delta;
    float x1, x2;

    printf("Entrez les coefficients a, b, c\n");

    scanf("%d", &a);

    scanf("%d", &b);

    scanf("%d", &c);

    if(a == 0)
    {
        printf("C'est pas une equation du second degre connaaaaaaaard !\nD'apres Thiboud, Nouveau Testament, Partie I, Verset 102\n");
    }
    else
    {
        delta = b*b - 4*a*c;
        if(delta == 0)
        {
            printf("L'equation n'a qu'une solution : X0 = %.2f\n", x1);
        }
        else if(delta > 0)
        {
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            printf("L'equation a deux solutions : X1 = %.2f et X2 = %.2f\n", x1, x2);
        }
        else if (delta < 0)
        {
            printf("L'equation n'a pas de coefficients reels.\n");
        }

    }


    return 0;

}

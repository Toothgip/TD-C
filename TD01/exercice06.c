#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur, largeur, perimetre, aire;
    printf("Donnez la longueur puis la largeur du rectangle\n");
    scanf("%f", &longueur);
    scanf("%f", &largeur);
    perimetre = 2*(longueur+largeur);
    aire = longueur*largeur;
    printf("Pour un rectangle de dimensions %f*%f:\nLe perimetre est de %f\nL'aire est de %f", longueur, largeur, perimetre, aire);
    return 0;
}

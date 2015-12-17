#include <stdio.h>
#include <stdlib.h>
#define M_PI		3.14159265358979323846

int main()
{
    int rayon = 21, diametre;
    float perimetre, aire;
    diametre = rayon*2;
    perimetre = 2* M_PI *rayon;
    aire = 2*M_PI*rayon*rayon;
    printf("Pour un cercle de rayon %d:\nLe diametre est de %d\nLa circonference est de %f\nL'aire est de %f", rayon, diametre, perimetre, aire);
    return 0;
}

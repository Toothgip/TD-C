#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x=10864, y=18817, nb1, nb2, nb3, nb4, nb5, resultat1, resultat2;
    nb1 = 9*x*x*x*x;
    nb2 = y*y*y*y;
    nb3 = 2*y*y;
    resultat1 = nb1 - nb2 + nb3;
    nb4 = 3*x*x+y*y-1;
    nb5 = 3*x*x-y*y+1;
    resultat2 = nb4*nb5+1;
    printf("nb1 = %d\nnb2 = %d\nnb3 = %d\nresultat1 = %d\nnb4 = %d\nnb5 = %d\nresultat2 = %d", nb1, nb2, nb3, resultat1, nb4, nb5, resultat2);
    return 0;
}

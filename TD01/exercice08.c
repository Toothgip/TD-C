#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long x=10864, y=18817, nb1 = 0, nb2, nb3, nb4, nb5,resultat2;
    long resultat1;
    nb1 = 9*x*x*x*x;
    nb2 = y*y*y*y;
    nb3 = 2*y*y;
    resultat1 = nb1 - nb2 + nb3;
    nb4 = 3*x*x+y*y-1;
    nb5 = 3*x*x-y*y+1;
    resultat2 = nb4*nb5+1;
    printf("nb1 = %lu\nnb2 = %lu\nnb3 = %lu\nresultat1 = %ld\nnb4 = %lu\nnb5 = %lu\nresultat2 = %lu", nb1, nb2, nb3, resultat1, nb4, nb5, resultat2);
    return 0;
}

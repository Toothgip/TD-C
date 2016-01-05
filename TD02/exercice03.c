#include <stdio.h>


int main(void)
{
    int  un = 0, n;
    float vn = 0, somme1 = 0, somme2 = 0;

    for ( n=0 ; n <= 9 ; n++ )
    {
        un = 3*n+5;
        vn = (3*n*n+5)/(n*n*n+1.f) ;
        printf("Pour n = %d :\nUn = %d et Vn = %f\n", n, un, vn);
        somme1 += un;
        somme2 += vn;
    }

    printf("\nPour le rang n = %d :\nLa somme de la suite Un est egale a %.1f\nLa somme de la suite Vn est egale a %f", n, somme1, somme2);


    return 0;

}

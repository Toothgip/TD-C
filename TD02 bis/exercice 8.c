#include <stdio.h>

void calcbase(int nb, int b);

int main(void)
{
    int nb , base;

    printf("Entrer un nombre decimal et la nouvelle base :\n");
    scanf(" %d", &nb);
    scanf("%d", &base);

    calcbase(nb, base);

    return 0;

}


void calcbase(int nb, int b)
{
    int q = nb, reste;
    char nbfinal[50];
    int i = 0, j;

    while (q != 0)
    {
            reste = q % b;
            q = q /b;
            nbfinal[i] = reste+48;
            i++;
    }
    if( b > 10)
    {
        for (j = i-1; j >= 0; j--)
        {
            if(nbfinal[j] >= 10)
                nbfinal[j] += 7;
        }
    }


    for(i -= 1 ; i >= 0; i--)
    {
        printf("%c", nbfinal[i]);
    }

}

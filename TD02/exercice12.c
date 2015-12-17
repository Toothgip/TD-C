#include <stdio.h>



int main(void)
{
    int  a, b , reste = 0, pgcd = 0;

    printf("Entrez deux entiers relatifs dont vous souhaitez connaitre le PGCD.\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(b > a)
    {
        reste = a;
        a = b;
        b = reste;
    }
    do
    {

        reste = a%b;
        a = b;
        b = reste;

        if(reste == 0)
        {
            pgcd = a;
        }

    }while(a%b != 0);
    printf("Le PGCD est %d", pgcd);



    return 0;

}

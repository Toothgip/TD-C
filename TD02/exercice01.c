#include <stdio.h>


int main(void)
{
    int table = 0, i;

    while(table >= 0)
    {

        printf("\nQuelle table de multiplication afficher ?\n(Entrer un nombre negatif pour arreter)\nLa table de ");
        scanf("%d", &table);
        if(table<0)
        {
            printf("Et je coupe le son ...!\n");
            break;
        }
        for ( i=0 ; i <= 10 ; i++ ) printf("%d x %d = %d \n", table, i, table*i);

    }


    return 0;

}

#include <stdio.h>

void multi(int nombre);

int main(void)
{
    int nb;
    printf("Entrer un nombre\n");
    scanf("%d", &nb);

    multi(nb);

    return 0;

}


void multi(int nombre)
{
    int i;
    for(i = 0;i <= 10; i++)
    {
        printf("%d * %d = %d\n", nombre , i ,nombre*i);
    }

}

/* Quelle est la portée du paramètre de la fonction ?
        Elle est locale dans la fonction

    Quelle est sa classe d'allocation ?
        Variable -> automatique
        */

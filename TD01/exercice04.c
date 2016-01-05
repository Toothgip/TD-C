#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("Entrez un nombre\n");
    scanf("%d", &nombre);
    printf("Vous avez entre le nombre %d\nSon double est %d\nSon triple est %d", nombre, nombre*2, nombre*3);
    return 0;
}

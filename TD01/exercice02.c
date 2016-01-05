#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2, b = 4, c = 0;
    printf("Donnez les valeurs de a puis de b \n");
    scanf("%d",&a);
    scanf("%d", &b);
    printf("Les valeurs sont a = %d et b = %d \n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Les valeurs sont maintenant a = %d et b = %d \n", a, b);
    return 0;
}

#include <stdio.h>
#define taille 20

void palindrome(int tab[taille]);


int main()
{
    int tab[taille], i;
    for(i = 0; i < taille; i++)
    {
        tab[i] = 2*i;
    }
    for(i=0; i<taille; i++)
        printf("%d: %d\n", i, tab[i]);

    palindrome(tab);
    printf("\n");

    for(i=0; i<taille; i++)
        printf("%d: %d\n", i, tab[i]);

    return 0;
}


void palindrome(int tab[taille])
{
    int i = taille-1, j = 0, var;
    for(; i > j; i--, j++)
    {
        var = tab[i];
        tab[i] = tab[j];
        tab[j] = var;
    }
}

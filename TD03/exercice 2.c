#include <stdio.h>
#define taille 20

void inverseTab(int tab[taille]);



int main()
{
    int tab[taille], i;
    for(i = 0; i < taille; i++)
    {
        tab[i] = 2*i;
    }

    inverseTab(tab);

    return 0;
}


void inverseTab(int tab[taille])
{
    int i = taille-1;
    for(; i >= 0; i--)
    {
        printf("%d: %d\n", i, tab[i]);
    }
}

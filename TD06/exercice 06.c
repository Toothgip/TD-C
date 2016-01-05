#include <stdlib.h>
#include <stdio.h>

void afficheEnvers(char tab[]);

int main()
{
    char tab[5] = "ABCD";

    afficheEnvers(tab);

    return 0;
}


void afficheEnvers(char tab[])
{
    int i;

    for(i = 0; tab[i+1] != '\0'; i++)
    {

    }
    for(; i >= 0; i--)
    {
        printf("%c", tab[i]);
    }
}

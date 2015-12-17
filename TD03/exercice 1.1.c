#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randTab(int tab[20]);
void afficheTab(int tab[20]);

int main()
{
    int tab[20];

    randTab(tab);
    afficheTab(tab);

    return 0;
}


void afficheTab(int tab[20])
{
    int i = 0;
    for(; i < 20; i++)
    {
        printf("%d: %d\n", i, tab[i]);
    }
}


void randTab(int tab[20])
{
    int i = 0;
    srand(time(NULL));
    for(; i < 20; i++)
    {
        tab[i] = (rand() % 109)-9;
    }
}


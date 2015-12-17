#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


char* miroir(char*);

int main()
{
    char tab1[100]="hello coucou bouh";
    char tab2[100]="huob uocuoc olleh";
    char* ptab1;
    char* ptab2 = tab2;


    for(ptab1 = miroir(tab1); *ptab1 != '\0'; ptab2++ && ptab1++)
    {
        assert(*ptab1 == *ptab2);
    }

    printf("Test boite noire termine");

    printf("\n");

    return 0;
}

char* miroir(char *tab1)
{
    char tab2[100];
    char* adresse = tab1;
    char* ptab2 = tab2;

    for(; *tab1 !=  '\0'; tab1++ && ptab2++)
    {
        *ptab2 = *tab1;
    }
    tab1 = adresse;
    ptab2 --;

    for(; *tab1 !=  '\0'; tab1++ && ptab2--)
    {
        *tab1 = *ptab2;
    }
    return adresse;

}

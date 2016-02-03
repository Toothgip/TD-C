#include <stdlib.h>
#include <stdio.h>

void sousChaine(char tab1[], char tab2[]);

int main()
{
    char tab1[] = "TROLOLOLOL LOLOLOL";
    char tab2[] = "LOL";

    char tab3[] = "KOU LOUKOULOU LOU KOULOU";
    char tab4[] = "KOU";

    sousChaine(tab1, tab2);

    sousChaine(tab3, tab4);

    return 0;
}


void sousChaine(char tab1[], char tab2[])
{
    int i, j, k, cpt = 0;

    for(i = 0; tab1[i] != '\0'; i++)
    {

        for(j = 0, k = i; tab2[j] != '\0'; j++, k++)
        {
            if( tab1[k] != tab2[j] )
            {
                break;
            }
        }
        /* printf("%d/%d - ", i, k); //Debug */

        if(j == 3)
        {
            cpt++;
            i = k-1;
        }
        /* printf("%d/%d \n", i, k); //Debug */
    }
    printf("La 2e chaine apparait %d fois.\n", cpt);
}

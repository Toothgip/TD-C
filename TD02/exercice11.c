#include <stdio.h>


void partie1(void);
void partie2(void);
void partie3(void);


int main(void)
{
    int  choix;

    printf("Que voulez-vous faire ?\n - Tapez 1 pour compter les 'L'\n - Tapez 2 pour supprimer les espaces\n - Tapez 3 pour changer la casse\n");
    scanf(" %d", &choix);

    switch(choix)
    {
        case 1 :    partie1();
                    break;

        case 2 :    partie2();
                    break;

        case 3 :    partie3();
                    break;

    }

    return 0;

}

void partie1(void)
{
    int cpt = 0, i;
    char texte = 0;

    printf("Tapez un texte \n");
    scanf("%c", &texte);

    if(texte == '\n')
        texte = 0;

    while(texte != '\n')
    {
        scanf("%c", &texte);
        if(texte == 'L' || texte == 'l')
        {
            cpt ++;
        }
    }

    printf("Le nombre de L ou l contenu dans votre texte est de %d", cpt);
}

void partie2(void)
{
    char texte = 0;

    printf("Tapez un texte \n");
    scanf("%c", &texte);

    if(texte == '\n')
        texte = 0;

    while(texte != '\n')
    {
        scanf("%c", &texte);
        if(texte != ' ')
        {
            printf("%c",texte);
        }
    }

}

void partie3(void)
{
    char texte = 0;

    printf("Tapez un texte (de moins de 100 caracteres)\n");
    scanf("%c", &texte);

    if(texte == '\n')
        texte = 0;

    while(texte != '\n')
    {
        scanf("%c", &texte);
        if(texte >= 'A' && texte <= 'Z')
        {
            texte += 32;
        }
        else if(texte >= 'a' && texte <= 'z')
        {
                texte -=32;
        }
        printf("%c", texte);
    }
}

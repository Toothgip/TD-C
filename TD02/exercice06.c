#include <stdio.h>

int main(void)
{
    int heure, min, sec;
    printf("Entrez l'heure sous la forme HHMMSS:\n");
    scanf("%d", &heure);

    sec = heure-100*(heure/100);
    min = heure/100-100*(heure/10000);
    heure = heure/10000;

    if(sec>59 || min>59 || heure>23)
    {
        printf("J'ai dit 'Entrer l'heure' imbecile !\n");
        return 0;
    }

    if(sec == 0)
    {
        if(min == 0)
        {
            if(heure == 0)
            {
                heure = 23;
            }
            else
            {
                heure -= 1;
            }
            min = 59;
        }
        else
        {
            min -= 1;
        }
        sec = 59;
    }
    else
    {
        sec -= 1;
    }

    printf("Il y a une seconde il etait donc %02dh %02dmin %02dsec", heure, min, sec);
    return 0;

}

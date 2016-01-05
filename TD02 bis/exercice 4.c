#include <stdio.h>

int secSuiv(int heuretot);

int main(void)
{
    int heurea;
    printf("Entrez l'heure sous la forme HHMMSS:\n");
    scanf("%d", &heurea);

    return(secSuiv(heurea));

}


int secSuiv(int heuretot)
{
    int heure, min, sec;
    sec = heuretot-100*(heuretot/100);
    min = heuretot/100-100*(heuretot/10000);
    heure = heuretot/10000;

    if(sec>59 || min>59 || heure>23)
    {
        printf("J'ai dit 'Entrer l'heure' !\n");
        return 0;
    }

    if(sec == 59)
    {
        if(min == 59)
        {
            if(heure == 23)
            {
                heure = 0;
            }
            else
            {
                heure += 1;
            }
            min = 0;
        }
        else
        {
            min += 1;
        }
        sec = 0;
    }
    else
    {
        sec += 1;
    }
    printf("Dans une seconde il sera %02dh %02dmin %02dsec", heure, min, sec);
    return(0);
}

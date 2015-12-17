#include <stdio.h>

int main(void)
{
    int  note1, note2, note3, min;

    printf("Entrer trois notes (comprises entre 0 et 20)\n");
    scanf("%d", &note1);
    scanf("%d", &note2);
    scanf("%d", &note3);

    if(note1<0 || note1>20 || note2<0 || note2>20 || note3<0 || note3>20)
    {
        printf("Mais quel boulet.... U_U'\n");
        return 0;
    }

    min = note1;
    if(min>note2)
    {min = note2;}
    if(min>note3)
    {min = note3;}

    printf("La moyenne des deux meilleurs notes est egale a %d", (note1+note2+note3-min)/2);

    return 0;

}

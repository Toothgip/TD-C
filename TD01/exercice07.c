#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date;
    printf("Entrez la date sous la forme JJMMAA:\n");
    scanf("%d", &date);
    printf("La date est donc %02d-%02d-20%02d", date/10000, date/100-100*(date/10000),date-100*(date/100));
    return 0;
}

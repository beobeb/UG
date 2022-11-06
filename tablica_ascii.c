#include <stdio.h>

int main()
{
    int znak;
    printf("Podaj numer kodu ASCII: ");
    scanf("%d", &znak);

    if(znak >= 65 && znak <= 90)
    printf("Znak jest mała litera alfabetu");
    else if (znak >= 97 && znak <= 122)
    printf("Znak jest duza litera alfabetu");
    else
    printf("znak nie jest litera alfabetu");



    return 0;
}

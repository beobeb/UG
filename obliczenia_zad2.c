#include <stdio.h>

int main()
{
    int a , b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    printf("Wynik dodawania = %d \n", a+b);
    printf("Wynik odejmowania = %d \n", a-b);
    printf("Wynik mnożenia = %d \n", a*b);
    printf("Wynik dzielenia = %d \n", a/b);
    printf("Wynik reszty z dzielenia = %d \n", a%b);

    return 0;
}

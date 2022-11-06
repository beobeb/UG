#include <stdio.h>

int main()
{
    int a,b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    if(a>b)
    printf("%d",a);
    else if(a<b)
    printf("%d",b);
    else
    printf("Liczby sa rowne");

    return 0;
}


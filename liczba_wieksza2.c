#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

    if(a>b && a>c)
    printf("%d", a);
    else if(b>a && b>c)
    printf("%d", b);
    else if(c>a && c>b)
    printf("%d",b);
    else if(a==b && a>c)
    printf("%d",a);
    else if(b==c && b>a)
    printf("%d",b);
    else if(c==a && c>b)
    printf("%d",c);
    else
    printf("Podane liczby sa takie same");

    return 0;
}


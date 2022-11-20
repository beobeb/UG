#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++)
    sum += i * i;

    printf("Suma kwadratu liczb od 1 do %d wynosi = %d",n,sum);

    return 0;
}

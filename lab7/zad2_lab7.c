#include <stdio.h>

int main()
{
    int tab[10];
    for(int i=0;i<10;i++){
    printf("Podaj %i wartosc tablicy:",i +1);
    scanf("%d",&tab[i]);
    }

    for(int n=0;n<10;n++)
    {
    printf("%d:{%d},",n+1,tab[n]);
    }

    return 0;
}

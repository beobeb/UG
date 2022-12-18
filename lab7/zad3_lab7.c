#include <stdio.h>

    int a,b;

    void zmiana(int a, int b){
        printf("Funkcja:\n A = %d ,B = %d\n",b,a);

    }

int main()
{
    printf("Podaj wartosc liczby A:");
    scanf("%d",&a);
    printf("Podaj wartosc liczby B:");
    scanf("%d",&b);

    printf("Przed funcja:\n A = %d ,B = %d\n",a,b);
    zmiana(a,b);
    printf("Po funkcji:\n A = %d ,B = %d\n",a,b);


    return 0;
}

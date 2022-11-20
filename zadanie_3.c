#include <stdio.h>


int main()
{
    int a,b,c,d;
    printf("Podaj a = ");
    scanf("%d",&a);
    printf("Podaj b = ");
    scanf("%d",&b);
    c=pow(a,b);
    d=pow(a,c);
    printf("%d\n",d);
    if(d>b)
    printf("a do potegi c jest wieksze od b i wynosi = %d",c);
    else
    printf("a do potegi c nie jest wieksze od b i wynosi = %d",c);

    return 0;
}

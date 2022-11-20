#include <stdio.h>


int main()
{
    int a,b,sum=1;
    printf("Podaj a = ");
    scanf("%d",&a);
    printf("Podaj b = ");
    scanf("%d",&b);
    for(int i=0; i<=b; i++){
    sum=sum*a;
    }
    sum=sum/2;

    if(a==1 || b==1)
    sum=1;
    if(a==0)
    sum=0;
    //sum=pow(a,b);
    printf("Liczba a(%d) do potegi b(%d) jest rowna = %d",a,b,sum);

    return 0;
}

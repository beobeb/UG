#include <stdio.h>

int ciag(int n)
{
    if(n<=0)
         return 0;
    if(n==1)
         return 1;
    return ciag(n-1)+ciag(n-2);
}

int main()
{
    int n=5;
    printf("Podaj liczbe = ");
    scanf("%d",&n);
    printf("%d",ciag(n));

    return 0;
}

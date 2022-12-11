#include <stdio.h>

int silnia(int n)
{
 if(n<2)
    return 1;
return n*silnia(n-1);
}

int main()
{
 int n;

 printf("Podaj liczbe: ");
 scanf("%d",&n);
 printf("n! = %d",silnia(n));

 return 0;
}

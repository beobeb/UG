#include <stdio.h>

    void ciag(int n)
    {
        if(n==1)
            printf("[1]");
        else if(n<=0)
            printf("[0]");
        else{
            ciag(n-1);
            printf("[%d]",n);
        }
    }

int main()
{
    int n;
    printf("Podaj liczbe = ");
    scanf("%d",&n);
    ciag(n);

    return 0;
}

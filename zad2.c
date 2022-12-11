#include <stdio.h>

    int algorytm(int a,int b)
    {
    if(b!=0)
    	return algorytm(b,a%b);
       /* if(a>b){
            return a=a-b;
        }else if(b>a){
            return b=b-a;
        }else if(a=b)
            return a; */
    }

int main()
{
    int a,b;
    printf("Podaj a = ");
    scanf("%d",&a);
    printf("Podaj b = ");
    scanf("%d",&b);
    printf("NWD = %d",algorytm(a,b));
    return 0;
}

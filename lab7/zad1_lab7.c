#include <stdio.h>

int global;

    void fun(int global, int local)
    {
        printf("%d {} %d \n", global , local);

    }

int main()
{
    int local;

    printf("Podaj wartosc zmiennych: \n");
    scanf("%d",&global);

    local = global;
    printf("%d {} %d \n", global , local);

    fun(global,local);


    return 0;
}

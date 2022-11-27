#include <stdio.h>

    char edit(char* tekst,int position){
    return tekst[position];
    }

int main()
{
    char tekst[50];
    int position,lenght;
    printf("napisz cos(max 50 znakow): ");
    scanf("%s",&tekst);
    printf("podaj pozycje znaku: \n");
    scanf("%d",&position);
    position--;

    printf("%c",edit(tekst,position));


    return 0;
}

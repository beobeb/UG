#include <stdio.h>

    int sprawdz(int rok){
    if(rok%4==0)
    printf("Rok %d jest rokiem przystepnym.",rok);
    else
    printf("Rok %d nie jest rokiem przystepnym.",rok);


    }

int main(){
    int rok;
    printf("Podaj rok aby sprawdzic czy jest przystepny: ");
    scanf("%d",&rok);
    printf("%c",sprawdz(rok));


    return 0;
}

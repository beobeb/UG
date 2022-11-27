#include <stdio.h>
#include <string.h>
#include <math.h>

    char edit(char* slowo){
    int i,j=strlen(slowo)-1;
        for(i=0; i < j; i++){
                if(slowo[i]==slowo[j-i]){
                printf("Slowo \"%s\" jest palidromem\n", slowo);
                break;
                }
                else{
                printf("Slowo \"%s\" nie jest palidromem\n", slowo);
                break;
                }
            }
        }

int main(){
    char slowo[50];
    printf("Wpisz słowo aby sprawdzic czy jest palindromem(max 50 znakow): ");
    scanf("%s", &slowo);
    printf("%c",edit(slowo));

    return 0;
}

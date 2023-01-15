#include<stdio.h>

    struct dane{
        char imie[30];
        char nazwisko[30];
        int numer;
    };

int main(){
    struct dane osoba1 = {"Zen","Kopyt",598625487};
    struct dane osoba2 = {"Bebkosz","Kanciak",464625798};

    printf("%s %s %d\n",osoba1.imie, osoba1.nazwisko, osoba1.numer);
    printf("%s %s %d\n",osoba2.imie, osoba2.nazwisko, osoba2.numer);
    
    return 0;
}


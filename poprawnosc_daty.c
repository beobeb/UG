#include <stdio.h>

int main()
{
    int d, m, r;
    printf("Podaj dzien: ");
    scanf("%d", &d);
    printf("Podaj miesiac: ");
    scanf("%d", &m);
    printf("Podaj rok: ");
    scanf("%d", &r);
    int md = {1,3,5,7,8,10,12};
    int mk = {4,6,9,11};
    int ml = 2;

    if(m == 1 || m == 3 || m == 5 || m == 7 ||m == 8 ||m == 10 ||m == 12
    && d >=1 && d <= 31
        || m == 4 || m == 6 ||m == 9 ||m == 11 && d >=1 && d <= 30 ||
        m == 2 && d >= 1 && d <= 28)

    printf("Data prawidlowa");
    else
    printf("Data nieprawidlowa");





    return 0;
}



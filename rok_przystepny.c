#include <stdio.h>

int main()
{
    int rok;
    printf("Podaj rok: ");
    scanf("%d", &rok);

    if(rok%4 == 0 )
    printf("Rok %d jest rokiem przystepnym", rok);
    else
    printf("Rok %d nie jest rokiem przystepnym", rok);

    return 0;
}

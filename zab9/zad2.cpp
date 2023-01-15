#include<stdio.h>

struct punkt {
    int x,y;
};

int main() {
    struct punkt punkt1 = {2, 3};
    printf("Punkt: (%d, %d)\n", punkt1.x, punkt1.y);
    return 0;
}

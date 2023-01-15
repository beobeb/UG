#include <stdio.h>

struct punkt {
    double x;
    double y;
};

void rownanie(struct punkt p1, struct punkt p2) {
    double a = (p2.y - p1.y) / (p2.x - p1.x);
    double b = p1.y - (a * p1.x);
    printf("Rownanie prostej: y = %.1fx + %.1f\n", a, b);
}

int main() {
    struct punkt p1 = {1.0, 2.0};
    struct punkt p2 = {3.0, 4.0};
    rownanie(p1, p2);
    return 0;
}

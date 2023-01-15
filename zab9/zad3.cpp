#include<stdio.h>

struct punkt {
    int x;
    int y;
};

struct trojkat {
    struct punkt a;
    struct punkt b;
    struct punkt c;
};

int czyTrojkat(struct trojkat t){
	double ab = ((t.a.x*t.a.x)+(t.a.y*t.a.y)) + ((t.b.x*t.b.x)+(t.b.y*t.b.y));
    double bc = ((t.b.x*t.b.x)+(t.b.y*t.b.y)) + ((t.c.x*t.c.x)+(t.c.y*t.c.y));
    double ac = ((t.a.x*t.a.x)+(t.a.y*t.a.y)) + ((t.c.x*t.c.x)+(t.c.y*t.c.y));
	    if (ab + bc > ac && ab + ac > bc && bc + ac > ab) {
        return 1;
    }
    return 0;	
}

int main() {
    struct trojkat t = {{2, 2}, {3, 4}, {2, 3}};
    if(czyTrojkat(t))
      printf("To jest trojkat\n");
    else
      printf("To nie jest trojkat\n");
      
    return 0;
}

#include <stdio.h>

int main() {
    int w = 8, p = 2;
    float x = 12.3456;

    printf("%*.*f", w, p, x); // output : 12.35
    return 0;
}

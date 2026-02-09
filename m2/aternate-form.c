#include <stdio.h>

int main() {
    int n = 10;
    float x = 5.0;

    printf("Octal: %#o\n", n); // output : 012
    printf("Hexadecimal: %#x\n", n); // output : 0xa
    printf("Hexadecimal (capital): %#X\n", n); // output : 0XA 
    printf("Float: %#f\n", x);// output : 5.000000

    return 0;
}

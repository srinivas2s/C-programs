#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {   // condition checked first
        printf("%d\n", i);
        i++;           // increment
    }
    return 0;
}
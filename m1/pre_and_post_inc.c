#include <stdio.h>
int main() 
{
    int i = 5;
    printf("Initial value of i: %d\n", i);
    printf("Pre-increment (++i): %d\n", ++i); 
    printf("Value of i after pre-increment: %d\n", i);
    i = 5;
    printf("\nReset value of i: %d\n", i);
    printf("Post-increment (i++): %d\n", i++);
    printf("Value of i after post-increment: %d\n", i);
    return 0;
}
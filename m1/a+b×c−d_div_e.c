#include <stdio.h>
int main() 
{
    int a, b, c, d, e;
    float result;
    printf("Enter values for a, b, c, d, e: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (e == 0) 
    {
        printf("Error: Division by zero is not allowed.\n");
    } 
    else 
    {
        result = ((a + b) * (c - d)) / (float)e;
        printf("Result = %.2f\n", result);
    }
    return 0;
}
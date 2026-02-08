#include <stdio.h>
int main() 
{
    float diameter, radius, perimeter;
    printf("Enter the diameter of the circle: ");
    scanf("%f", &diameter);
    radius = diameter / 2;
    perimeter = 2 * 3.14159 * radius;  
    printf("Radius of the circle: %.2f\n", radius);
    printf("Perimeter (Circumference) of the circle: %.2f\n", perimeter);
    return 0;
}
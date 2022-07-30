#include <stdio.h>
#define pi 3.14;
void main()
{
    float r, area, perimeter;
    printf("Enter the value of radius\n");
    scanf("%f", &r);
    area = r * r * pi;
    perimeter = 2 * r * pi;
    printf("Area of circle = %f\n", area);
    printf("Perimeter of circle = %f\n", perimeter);
}

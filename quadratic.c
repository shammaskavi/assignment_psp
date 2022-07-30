#include <stdio.h>
#include <math.h>
//#define sqrt
int main()
{
    int a, b, c;
    float r1, r2, det, real, imag, r;
    printf("Enter coefficients a,b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0)
        printf("INVALID INPUT\n");
    else
    {
        det = b * b - 4 * a * c;
        r = sqrt(fabs(det));
        if (det > 0)
        {
            r1 = (-b + r) / (2.0 * a);
            r2 = (-b - r) / (2.0 * a);
            printf("Roots are real and distinct\nRoot 1 = %f\t\t\tRoot 2 = %f\n", r1, r2);
        }
        else if (det == 0)
        {
            r1 = r2 = -b / (2.0 * a);
            printf("Roots are real and equal\nRoot 1 = Root 2 = %f\n", r1);
        }
        else
        {
            real = -b / (2.0 * a);
            imag = r / (2.0 * a);
            printf("Roots are imaginary\nRoot 1 = %f+i%f\t\t\tRoot 2 = %f-i%f\n", real, imag, real, imag);
        }
    }
    return 0;
}

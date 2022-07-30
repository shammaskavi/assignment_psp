#include <stdio.h>
int main()
{
    float P, T, R, SI;
    printf("Principle amt=\n");
    scanf("%f", &P);
    printf("Time=\n");
    scanf("%f", &T);
    printf("Rate of interest=\n");
    scanf("%f", &R);
    SI = (P * T * R) / 100;
    printf("The Simple Interest is %f\n", SI);
    return 0;
}


PS E:\Shammas\Bachelors\II\PSP\programs> .\SI
Principle amt=
2900
Time=
2
Rate of interest=
3
The Simple Interest is 174.000000
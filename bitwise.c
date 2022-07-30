#include <stdio.h>
int main()
{
    int A, B;
    printf("Enter 2 no.\n");
    scanf("%d%d", &A, &B);
    printf("The bitwise AND = %d\n", A & B);
    printf("The bitwise OR = %d\n", A | B);
    printf("The bitwise NOT = %d\n", ~B);
    printf("The bitwise LEFT SHIFT = %d\n", A << 2);
    printf("The bitwise RIGHT SHIFT = %d\n", B >> 2);
    return 0;
}

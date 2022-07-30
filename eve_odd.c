#include <stdio.h>
int main()
{
    int l;
    printf("Enter a value to check odd or even\n");
    scanf("%d", &l);
    if (l % 2 == 0)
        printf("The number is EVEN\n");
    else
        printf("The number is ODD\n");
    return 0;
}

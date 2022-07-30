#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n % 9 == 1)
        printf("%d is a MAGIC number\n", n);
    else
        printf("%d is NOT a MAGIC number\n", n);
    return 0;
}



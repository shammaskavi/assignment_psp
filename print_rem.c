#include <stdio.h>
int main()
{
    int l, m, rem;
    printf("Enter the values of l and m\n");
    scanf("%d%d", &l, &m);
    rem = l % m;
    printf("Remainder = %d\n", rem);
    return 0;
}

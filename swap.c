#include <stdio.h>
int main()
{
    int l, m;
    printf("Enter values of l amd m\n");
    scanf("%d%d", &l, &m);
    l = l + m;
    m = l - m;
    l = l - m;
    printf("The value of l = %d\n", l);
    printf("the value of m = %d\n", m);
    return 0;
}




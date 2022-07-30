#include <stdio.h>
int main()
{
    int in, rn = 0, rd, temp;
    printf("Enter a number\n");
    scanf("%d", &in);
    temp = in;
    while (temp != 0)
    {
        rd = temp % 10;
        rn = (rn * 10) + rd;
        temp = temp / 10;
    }
    if (rn == in)
    {
        printf("%d is a PALINDROME number\n", in);
    }
    else
    {
        printf("%d is not a PALINDROME number\n", in);
    }
    return 0;
}

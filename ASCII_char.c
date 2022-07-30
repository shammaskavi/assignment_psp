#include <stdio.h>
int main()
{
    int L;
    char Res;
    printf("Enter any number: \n");
    scanf("%d", &L);
    Res = (char)(L);
    printf("The character of the ASCII value is %c", Res);
    return 0;
}
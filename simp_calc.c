#include <stdio.h>
int main()
{
    char operation;
    float a, b, res;
    printf("\t\t\t\t\t\t\t\tCALCULATOR\n");
    printf("Enter arithmetic expression[OP1,OP2]:\n");
    scanf("%f%c%f", &a, &operation, &b);
    switch (operation)
    {
    case '+':
        printf("%f+%f=%f\n", a, b, a + b);
        break;
    case '-':
        printf("%f-%f=%f\n", a, b, a - b);
        break;
    case '*':
        printf("%f*%f=%f\n", a, b, a * b);
        break;
    case '/':
        if (b != 0)
            printf("%f/%f=%f\n", a, b, a / b);
        else
            printf("DIVISION ERROR\n");
        break;
    case '%':
    {
        if (b != 0)
        {
            res = (int)a % (int)b;
            printf("Remainder=%f\n", res);
        }
        else
            printf("DIVISION ERRROR\n");
    }
    break;
    default:
        printf("INCORRECT MATHEMATICAL OPERATION\n");
        break;
    }
    return 0;
}

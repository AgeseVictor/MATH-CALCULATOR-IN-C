#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char unit;
    double num1;
    double num2;
    double result;

    printf("Enter Mode of Operator (+ - * / ) \n");
    scanf("%c", &unit);
    switch(unit)
    {
    case '+':
        printf("Enter num1 : \n");
        scanf("%lf", &num1);
        printf("Enter num2 : \n");
        scanf("%lf", &num2);
        result = num1 + num2;
        printf("%lf \n", result);
        break;
    case '-':
        printf("Enter num1 : \n");
        scanf("%lf", &num1);
        printf("Enter num2 : \n");
        scanf("%lf", &num2);
        result = num1 - num2;
        printf("%.lf \n", result);

        break;
    case '/':
        printf("Enter num1 : \n");
        scanf("%lf", &num1);
        printf("Enter num2 : \n");
        scanf("%lf", &num2);
        result = num1 / num2;
        printf("%lf \n", result);

        break;
    case '*':
        printf("Enter num1 : \n");
        scanf("%lf", &num1);
        printf("Enter num2 : \n");
        scanf("%lf", &num2);
        result = num1 * num2;
        printf("%lf \n", result);

        break;

    default:
        break;
    }

    return 0;
}
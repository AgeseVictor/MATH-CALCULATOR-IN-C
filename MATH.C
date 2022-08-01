#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char unit;
    int num1;
    int num2;
    int result;

    printf("Enter mode of Operator (+ - * / ) \n");
    scanf("%c", &unit);
    switch(unit)
    {
    case '+':
        printf("Enter num1 : \n");
        scanf("%d", &num1);
        printf("Enter num2 : \n");
        scanf("%d", &num2);
        result = num1 + num2;
        printf("%d", result);
        break;
    case '-':
        printf("Enter num1 : \n");
        scanf("%d", &num1);
        printf("Enter num2 : \n");
        scanf("%d", &num2);
        result = num1 - num2;
        printf("%d", result);

        break;
    case '/':
        printf("Enter num1 : \n");
        scanf("%d", &num1);
        printf("Enter num2 : \n");
        scanf("%d", &num2);
        result = num1 / num2;
        printf("%d", result);

        break;
    case '*':
        printf("Enter num1 : \n");
        scanf("%d", &num1);
        printf("Enter num2 : \n");
        scanf("%d", &num2);
        result = num1 * num2;
        printf("%d", result);

        break;

    default:
        break;
    }

    return 0;
}
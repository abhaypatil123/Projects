#include<stdio.h>

int main(void)
{
    char operator = '\0';
    double first, second = 0.0;
    printf("Enter the opearator (+ , - , /, *) : ");
    scanf("%c",&operator);

    printf("Enter the two numbers one by one :");
    scanf("%lf%lf",&first,&second);

    switch (operator)
    {
        case '+':
        printf("%lf + %lf = %lf",first,second,(first + second));
        break;

        case '-':
        printf("%lf - %lf = %lf",first,second,(first - second));
        break;

        case '*':
        printf("%lf * %lf = %lf",first,second,(first * second));
        break;

         case '/':
         if(second != 0.0)
        printf("%lf / %lf = %lf",first,second,(first / second));
        else
        printf("Divided by zero situation");
        break;

        default:
        printf("Invalid operator");
         






    }
    return 0;

}
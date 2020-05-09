#include <stdio.h>
#include <conio.h>
main()
{
float num1;
float num2;
float result;
char op;
printf("Enter the first number:");
scanf("%f",&num1);
printf("Enter the operation:");
scanf(" %c",&op);
printf("Enter the second number:",&num2);
scanf("%f",&num2);
switch(op)
{
case '-':
    result=num1-num2;
    printf("%f",result);
    break;

case '+':
    result=num1+num2;
    printf("%f",result);
    break;

case '*':
    result=num1*num2;
    printf("%f",result);
    break;

case '/':
    result=num1/num2;
    printf("%f",result);
    break;

default:
    printf("Invalid operation");

}
_getch();

}

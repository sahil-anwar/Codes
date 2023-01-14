#include<stdio.h>
int main()
{
    //DECLARATION-VARIABLES
    int a;
    int b;
    int sum;
    int minus;
    int multiply;
    int divide;
    int remainder;
    //USER-CONSOLE
    printf("\nEnter First Number:",a);
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    //SUM
    sum=a+b;
    printf("\nSum=%d ",sum);
    //MINUS    
    minus=a-b;
    printf("\nMinus=%d",minus);
    //MULTIPLY
    multiply=a*b;
    printf("\nMultiply=%d",multiply);
    //DIVIDE
    divide=a/b;
    printf("\nDivide=%d",divide);
    //REMAINDER
    remainder=a%b;
    printf("\nRemainder=%d",remainder);
    return 0;
}
#include<stdio.h>
int main()
{
    int Number;
    printf("Enter Any Number:");
    scanf("%d",&Number);
    if(Number<0)
    {
    printf("%d is a Negative Number",Number);
    }
    if(Number>0)
    {
    printf("%d is a Positive Number",Number);
    } 
    else if(Number==0)
    {
    printf("%d is a Zero Number",Number);
    } 
}
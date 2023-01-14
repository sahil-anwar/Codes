#include<stdio.h>
int main()
{
    //--Declaration--//
    int Year;
    //--User Console--//
    printf("Enter Any Year:");
    scanf("%d",&Year);
    // If-Else-Condtion//
    //--Divisible by 400 is a leaf yea--//
    if(Year%400==0)
    {
         printf("Leaf Year:%d",Year);
    } 
    //--Divisible by 100 is not  a leaf year--//
    else if(Year%100==0)
    {
         printf("Not Leaf Year:%d",Year);
    }
    //--Divisible by 4 is  a leaf year--//
    else if(Year%4==0)
    {
         printf("Leaf Year:%d",Year);
    }
    else
    {
         printf("NOt a Leaf Year:%d",Year);
    }
    return 0;
}
#include<stdio.h>
int main()
{
     long long number;
     int count=0;
    printf("Enter Any Integer:");
    scanf("%lld",&number);

    do{
       number = number/10;
         count++;

     }
     while(number != 0);
     printf("%d",count);
     
     return 0;
}
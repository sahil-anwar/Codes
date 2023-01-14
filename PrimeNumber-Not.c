#include<stdio.h>
int main()
{
    //declaration
    int number,i,count=0;
    //user-console
    printf("Enter number:");
    scanf("%d",&number);
    // A number can be divible to its half i.e 10 10/2=5 from 1 to 5 -(2,5) are the factors.
    int half=number/2;
    //for-loop
    for(i=1;i<=half;i++)
    {
    //if-condition
    if(number%i==0)
       {
            count++;
       }
    }
    if(count==1) 
    // "from one to half there will be one number which gives remainder 0" i.e 1.
       {
       printf("%d is a prime number",number);
       }
       else
       {
        printf("%d is not  a prime number",number);
       }
       return 0;
}




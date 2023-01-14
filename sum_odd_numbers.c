#include<stdio.h>
int main()
{
    int number,i,odd,sum=0;

    printf("Enter the nth number: ");
    scanf("%d",&number);
    printf("\nthe odd numbers are: ");
    for(i=1;i<=number;i++)
    {
        odd=2*i-1;
        printf(" %d",odd);
        sum+=odd;
    }
    printf("\nthe sum of these %d odd number are : %d",number,sum);

}
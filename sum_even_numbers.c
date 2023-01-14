#include<stdio.h>
int main()
{
    int number,i,even,sum=0;

    printf("Enter Even Numbers to Sum:");
    scanf("%d",&number);
    printf("The Even Numbers Are: ");
    for(i=1;i<=number;i++)
    {
        even=i*2;
        printf(" %d",even);
        sum+=even;
    }
    printf("\nThe sum of the %d even numbers  are : %d",number,sum);
    return 0;
}
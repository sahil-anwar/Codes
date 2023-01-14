#include<stdio.h>
int main()
{
    int number,i,factorial=1;
    printf("Enter Any Number:");
    scanf("%d",&number);
    for(i=1;i<=number;++i)
    {
        factorial=factorial*i;
    }
        printf("%d",factorial);

}
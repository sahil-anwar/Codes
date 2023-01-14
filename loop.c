#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter ANy Natural Number are:");
    scanf("%d",&number);
 for(int i=1;i<=number;i++)
 {
 //printf("%d\t",i);
 sum+=i;
 }
 printf("Sum of First %d Natural Number are:%d",number,sum);
 return 0;
}
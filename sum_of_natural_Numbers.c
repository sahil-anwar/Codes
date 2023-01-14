#include<stdio.h>
int main()
{
    int Number,Sum=0;
    printf("Enter any Natural Number:");
    scanf("%d",&Number);
    for(int i=0;i<=Number;i++)
    {
        Sum=Sum+i;
    }
    printf("sum of numbers:%d",Sum);
    return 0;
}
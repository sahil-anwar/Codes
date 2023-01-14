#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter start number:");
    scanf("%d",&start);
        printf("Enter end number:");
    scanf("%d",&end);

    int i=start;
    while(i<=end)
    {
        printf(" %d",i);
        ++i;
    }
    return 0;
}
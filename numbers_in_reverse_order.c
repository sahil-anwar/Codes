#include<stdio.h>
int main()
{
    char start,end;
    printf("Enter start number:");
    scanf("%d",&start);
        printf("Enter end number:");
    scanf("%d",&end);

    int i=end;
    while(i>=start)
    {
        printf(" %d",i);
        i--;
    }
    return 0;
}
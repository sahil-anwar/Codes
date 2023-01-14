#include<stdio.h>
int main()
{
    int start,end,i;
    printf("Enter ANy start:");
    scanf("%d",&start);
        printf("Enter ANy end:");
    scanf("%d",&end);
    for( i=end;i>=start;i++)
    
        printf("%d",i);
    
    return 0;
}
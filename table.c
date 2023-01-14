#include<stdio.h>
int main()
{
    int table,i,start,limit,multiply=1;
    printf("Enter Table Number:");
    scanf("%d",&table);
    printf("Enter the Start of the table:");
    scanf("%d",&start);
    printf("Enter the limit of the table:");
    scanf("%d",&limit);
   
    for( i=start;i<=limit;i++)
    {
        multiply=table*i;
        if(i==4)
        continue;
        if(i==10)
        break;
         printf("%d * %d = %d\n",table,i,multiply);
    }
        return 0;
}
#include<stdio.h>
int main()
{
    int number,i,j,flag=0;

    printf("Enter ANy Number:");
    scanf("%d",&number);

    for(i=2;i<=number;i++)
    {
        if(number%i==0)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                       {
                       flag=1;
                       break;
                       }
                       
        }
        if(flag==0)
                       {
                        printf("%d\t",i);
                       }
            }
    }


}
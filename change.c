#include<stdio.h>
int main()
{
    int number,i,j,f=0;

    printf("Enter positive number:");
    scanf("%d",&number);
    printf("\nPrime Factors of %d are:  ",number);


    for(i=2;i<=number;i++)
        {
            if(number%i==0)
            {
                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                printf("%d\t",i);
                }
            }
        }
}
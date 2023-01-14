#include<stdio.h>
int main()
{
    int number,f=0;

    printf("Enter positive number:");
    scanf("%d",&number);
    printf("\nPrime Factors of %d are:  ",number);

     int i=2;
    while(i<=number)
        {
            if(number%i==0)
            {
                int j=2;
                while(j<=i/2)
                {
                    if(i%j==0)
                    {
                        f=1;
                        break;
                    }
                    j++;
                }
                if(f==0)
                {
                printf("%d\t",i);
                }
            }
            i++;
        }
}
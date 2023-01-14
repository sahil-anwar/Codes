#include<stdio.h>
int main()
{
    long long number;
    int count=0;
    printf("ENter any Integer:");
    scanf("%lld",&number);
    do{
        number=number/10;
        count++;
    }
    while(number != 0);
    {
        printf("Digits of number are: %d",count);
        return 0;
    }


}
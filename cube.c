#include<stdio.h>
int main()
{
    int number,cube;
    printf("ENter any number to find its cube:");
    scanf("%d",&number);

    cube=number*number*number;
    
    printf("The Cube of number %d is %d",number,cube);
    return 0;

}
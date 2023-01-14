#include<stdio.h>
int main()
{
    int i= 0;
    while(i<5)
    {
         printf("%d",i);
         printf("\n");
         i++;
    }
    do
    {
        printf("\nDo While\n");
        printf("%d",i);
        printf("\n");
        i++;
    }
    while(i<0);
}
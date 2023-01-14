#include<stdio.h>
int main()
{
    //--Declaration--//
    int x,y,z;
    //--User--Console--//
    printf("Enter First Number:",x);
    scanf("%d",&x);
    printf("Enter Second Number:",y);
    scanf("%d",&y);
    printf("Enter Third Number:",z);
    scanf("%d",&z);
    //--if-Condition--//
    if(x>=y && x>=z)
    {
    printf("Largest Integer is:%d",x);
    }
    if(y>=x && y>=z)
    {
    printf("Largest Integer is:%d ",y);
    }
    if(z>=x && z>=y)
    {
    printf("Largest Integer is:%d",z);
    }
    return 0;

}
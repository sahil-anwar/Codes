#include<stdio.h>
int main()
{
    
   //Conversion of USD to PKR
    float USD;
    printf("\nEnter Amount In USD:");
    scanf("%f",&USD);
    float PKR;
    PKR=USD*235.5;
    printf("Amount of USD in PKR: %.2f PKR\n ",PKR);
    //Coversion of Euros to PKR
    float Euro;
    printf("\nEnter Amount in Euros:");
    scanf("%f",&Euro);
    PKR=Euro*265;
    printf("Amount Of Euros in PKR: %.2f PKR\n",PKR);

    //Conversion of GBP to PKR
    float GBP;
    printf("\nEnter Amount in GBP:");
    scanf("%f",&GBP);
    PKR=GBP*270.84;
    printf("Amount of GBP in PKR: %.2f PKR\n",PKR);

    //Conversion of Indian Rupees to PKR
    float IND;
    printf("\nEnter Amount In IND:");
    scanf("%f",&IND);
    PKR=IND*2.73;
    printf("Amount of IND In PKR: %.2f PKR\n",PKR);
    return 0;
}
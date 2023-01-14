#include<stdio.h>
int main()
{
     float USD;
     float PKR;
     float Euro;
     float GBP;
     float IND;
    printf("\nPlease choose following options:\n");
    printf("1:USD to PKR\n",USD);
    printf("2:Euro to PKR\n",PKR);
    printf("3:GBP to PKR\n",Euro);
    printf("4:IND to PKR\n",GBP);
    scanf("%f%f%f%f",&USD,&PKR,&Euro,&GBP,&IND);
    

    //Conversion of USD to PKR
    printf("\nEnter Amount In USD:");
    scanf("%f",&USD);
    PKR=USD*235.5;
    printf("Amount of USD in PKR: %.2f PKR\n ",PKR);

    //Coversion of Euros to PKR
    printf("\nEnter Amount in Euros:");
    scanf("%f",&Euro);
    PKR=Euro*265;
    printf("Amount Of Euros in PKR: %.2f PKR\n",PKR);

    //Conversion of GBP to PKR
    printf("\nEnter Amount in GBP:");
    scanf("%f",&GBP);
    PKR=GBP*270.84;
    printf("Amount of GBP in PKR: %.2f PKR\n",PKR);

    //Conversion of Indian Rupees to PKR
    printf("\nEnter Amount In IND:");
    scanf("%f",&IND);
    PKR=IND*2.73;
    printf("Amount of IND In PKR: %.2f PKR\n",PKR);
    return 0;
}
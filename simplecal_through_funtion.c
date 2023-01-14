#include<stdio.h>
conversioncurrency(float USD,float Euro, float GBP,float IND,float PKR)
{
    int choose;
    int Amount;
    printf("Following are the Choices:\n");
    printf("1:USD\n");
    printf("2:Euro\n");
    printf("3:GBP\n");
    printf("4:IND\n");
    printf("5:PKR\n");
    printf("\nEnter your choice: ");
    scanf("%f",&choose);
    
    printf("Enter the amount you want to convert?\n");
    scanf("%f", &Amount);

   switch (choose)
  {
        case 1: // PKR-Conversion
        USD=Amount*0.0044;
        printf("%.2f PKR =  %.2f dollar", Amount, USD);
 
        GBP=Amount*0.0037;
        printf("\n%.2f PKR =  %.2f pound", Amount, GBP);
 
        Euro=Amount*0.0042;
        printf("\n%.2f PKR =  %.2f Euro", Amount, Euro);

        IND=Amount*0.36;
        printf("\n%.2f PKR = %.2f IND",Amount,IND);
        break;

         case 2: // Dollar- Conversion
        PKR= Amount*226.98;
        printf("\n%.2f Dollar =  %.2f rupee", Amount, PKR);
 
        GBP= Amount*0.83;
        printf("\n%.2f Dollar =  %.2f pound", Amount, GBP);
 
        Euro = Amount*0.94;
        printf("\n%.2f Dollar =  %.2f euro", Amount, Euro);
        break;

         default:
        printf("\nInvalid Input");
  }
    /*if(choose==1){
      //Conversion of USD to PKR
    printf("\nEnter Amount In USD:");
    scanf("%f",&USD);
    PKR=USD*235.5;
    printf("Amount of USD in PKR: %.2f PKR\n ",PKR);
    }
    if(choose==2){
       //Coversion of Euros to PKR
    printf("\nEnter Amount in Euros:");
    scanf("%f",&Euro);
    PKR=Euro*265;
    printf("Amount Of Euros in PKR: %.2f PKR\n",PKR);
    }
    if(choose==3){
      //Conversion of GBP to PKR
    printf("\nEnter Amount in GBP:");
    scanf("%f",&GBP);
    PKR=GBP*270.84;
    printf("Amount of GBP in PKR: %.2f PKR\n",PKR);
    }
    if(choose==4){
       //Conversion of Indian Rupees to PKR
    printf("\nEnter Amount In IND:");
    scanf("%f",&IND);
    PKR=IND*2.73;
    printf("Amount of IND In PKR: %.2f PKR\n",PKR);
    }
    if(choose==5){
      //Conversion of PKR to USD
    printf("\nEnter Amount In PKR:");
    scanf("%f",&PKR);
    USD=PKR*0.0044;
    printf("Amount of PKR in USD: %.2f$\n ",USD);
    }
    if(choose==6){
       //Coversion of Euros to USD
    printf("\nEnter Amount in Euros:");
    scanf("%f",&Euro);
    USD=Euro*1.06;
    printf("Amount Of Euros in PKR: %.2f$\n",USD);
    }
    if(choose==7){
      //Conversion of GBP to USD
    printf("\nEnter Amount in GBP:");
    scanf("%f",&GBP);
    USD=GBP*1.21;
    printf("Amount of GBP in PKR: %.2f$\n",USD);
    }
    if(choose==8){
       //Conversion of Indian Rupees to USD
    printf("\nEnter Amount In IND:");
    scanf("%f",&IND);
    USD=IND*0.012;
    printf("Amount of IND In PKR: %.2f PKR\n",USD);
    }*/
}
int main()
{
    float USD,Euro,GBP,IND,PKR;
    conversioncurrency(USD,Euro,GBP,IND,PKR);
    conversioncurrency(USD,Euro,GBP,IND,PKR);
    conversioncurrency(USD,Euro,GBP,IND,PKR);
    conversioncurrency(USD,Euro,GBP,IND,PKR);
    return 0;
}
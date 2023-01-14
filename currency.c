#include <stdio.h>
int main()
{
    //Declaration
    float Amount;
    float PKR,USD,Euro,GBP,IND;
    int select;
    //User-Console    
    
    //
    printf("Which Currency do you want to convert??:\n");
    printf("01:PKR to USD\n");
    printf("02:PKR to GBP\n");
    printf("03:PKR to Euro\n");
    printf("04:PKR to IND\n\n");
    //
    printf("5:USD to PKR\n");
    printf("6:USD to GBP\n");
    printf("7:USD to Euro\n");
    printf("8:USD to IND\n\n");
    //
    printf("09:Euro to PKR\n");
    printf("10:Euro to USD\n");
    printf("11:Euro to GBP\n");
    printf("12:Euro to IND\n\n");
    //
    printf("13:GBP to PKR\n");
    printf("14:GBP to USD\n");
    printf("15:GBP to Euro\n");
    printf("16:GBP to IND \n\n");
    //
    printf("17:IND to PKR\n");
    printf("18:IND to USD\n");
    printf("19:IND to Euro\n");
    printf("20:IND to GBP\n\n");
    
    printf("\nEnter your choice:");
    scanf("%d",&select);
    //Amount
    printf("Enter the amount you want to convert?\n");
    scanf("%f", &Amount);
    //Using-Switch-Case
   switch (select)
  {
    
        // PKR-Conversion
        case 1: 
        USD=Amount*0.0044;
        printf("%.2f PKR =  %.2f dollar", Amount, USD);
        break;
        case 2: 
        GBP=Amount*0.0037;
        printf("\n%.2f PKR =  %.2f pound", Amount, GBP);
        break;
        case 3:
        Euro=Amount*0.0042;
        printf("\n%.2f PKR =  %.2f Euro", Amount, Euro);
        break;
        case 4:
        IND=Amount*0.36;
        printf("\n%.2f PKR = %.2f IND",Amount,IND);
        break;
        // Dollar- Conversion
        case 5: 
        PKR= Amount*226.98;
        printf("\n%.2f Dollar =  %.2f  PKR", Amount, PKR);
        break;
        case 6:
        GBP= Amount*0.83;
        printf("\n%.2f Dollar =  %.2f pound", Amount, GBP);
        break;
        case 7:
        Euro = Amount*0.94;
        printf("\n%.2f Dollar =  %.2f euro", Amount, Euro);
        break;
        case 8:
        IND=Amount*82.68;
        printf("\n%.2f Dollar = %.2f IND",Amount,IND);
        break;
        // Euro Conversion
        case 9: 
        PKR = Amount * 80;
        printf("\n%.2f Euro =  %.2f PKR", Amount, PKR);
        break;
        case 10:
        USD = Amount *1.14;
        printf("\n%.2f Euro =  %.2f USD", Amount, USD);
        break;
        case 11:
        GBP = Amount *0.90;
        printf("\n.2%f Euro =  %.2f GBP", Amount, GBP);
        break;
        case 12:
        IND=Amount*87.66;
        printf("\n%.2f Euro = %.2f IND",Amount,IND);
        break;
        // GBP-Conversion
        case 13: 
        PKR = Amount *273.65;
        printf("\n%.2f GBP =  %.2f PKR", Amount, PKR);
        break;
        case 14: 
        USD = Amount *1.21;
        printf("\n%.2f GBP =  %.2f USD", Amount, USD);
        break;
        case 15: 
        Euro = Amount *1.14;
        printf("\n%.2f GBP =  %.2f Euro", Amount, Euro);
        break;
        case 16: 
        IND=Amount*99.68;
        printf("\n%.2f GBP = %.2f IND",Amount,IND);
        break;
        // IND-Conversion
        case 17: 
        PKR = Amount *2.75;
        printf("\n%.2f IND =  %.2f PKR", Amount, PKR);
        break;
        case 18:
        USD = Amount *0.012;
        printf("\n%.2f IND =  %.2f USD", Amount, USD);
        break;
        case 19:
        Euro = Amount *0.011;
        printf("\n%.2f IND =  %.2f Euro", Amount, Euro);
        break;
        case 20:
        GBP=Amount*0.010;
        printf("\n%.2f IND = %.2f IND",Amount,IND);
        break;

         default:
        printf("");
  }
      return 0;
}
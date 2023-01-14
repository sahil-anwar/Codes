#include <stdio.h>
int main()
{
    //Declaration
    float Amount;
    float PKR,USD,Euro,GBP,IND;
    int select;
    //User-Console    
    printf("Following are the Choices:\n");
    printf("1:PKR\n");
    printf("2:USD\n");
    printf("3:Euro\n");
    printf("4:GBP\n");
    printf("5:IND\n");
    //Select-Currency
    printf("\nEnter your choice: ");
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
 
        GBP=Amount*0.0037;
        printf("\n%.2f PKR =  %.2f pound", Amount, GBP);
 
        Euro=Amount*0.0042;
        printf("\n%.2f PKR =  %.2f Euro", Amount, Euro);

        IND=Amount*0.36;
        printf("\n%.2f PKR = %.2f IND",Amount,IND);
        break;

        // Dollar- Conversion
        case 2: 
        PKR= Amount*226.98;
        printf("\n%.2f Dollar =  %.2f rupee", Amount, PKR);
 
        GBP= Amount*0.83;
        printf("\n%.2f Dollar =  %.2f pound", Amount, GBP);
 
        Euro = Amount*0.94;
        printf("\n%.2f Dollar =  %.2f euro", Amount, Euro);

        IND=Amount*82.68;
        printf("\n%.2f Dollar = %.2f IND",Amount,IND);
        break;

        // Euro Conversion
        case 3: 
        PKR = Amount * 80;
        printf("\n%.2f Euro =  %.2f PKR", Amount, PKR);
 
        USD = Amount *1.14;
        printf("\n%.2f Euro =  %.2f USD", Amount, USD);
 
        GBP = Amount *0.90;
        printf("\n.2%f Euro =  %.2f GBP", Amount, GBP);
        
        IND=Amount*87.66;
        printf("\n%.2f Euro = %.2f IND",Amount,IND);
        break;
        
        // GBP-Conversion
        case 4: 
        PKR = Amount *273.65;
        printf("\n%.2f GBP =  %.2f PKR", Amount, PKR);
 
        USD = Amount *1.21;
        printf("\n%.2f GBP =  %.2f USD", Amount, USD);
 
        Euro = Amount *1.14;
        printf("\n%.2f GBP =  %.2f Euro", Amount, Euro);

        IND=Amount*99.68;
        printf("\n%.2f GBP = %.2f IND",Amount,IND);
        break;
 
        // IND-Conversion
        case 5: 
        PKR = Amount *2.75;
        printf("\n%.2f IND =  %.2f PKR", Amount, PKR);
 
        USD = Amount *0.012;
        printf("\n%.2f IND =  %.2f USD", Amount, USD);
 
        Euro = Amount *0.011;
        printf("\n%.2f IND =  %.2f Euro", Amount, Euro);

        GBP=Amount*0.010;
        printf("\n%.2f IND = %.2f IND",Amount,IND);
        break;

         default:
        printf("Invalid Input");
  }
      return 0;
}
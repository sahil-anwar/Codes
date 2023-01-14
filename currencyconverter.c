#include<stdio.h>
int main()
{
    int a, b;
	double amount;
	double USD = 1;
	double GBP = 0.83;
	double INR = 81.36;
	double PKR = 225.39;
	double EURO = 0.95;
    printf("Currency Calculator");
    printf("\nSelect currency you want to change from:\n");
    printf("1. USD  2. GBP  3. INR  4. PKR  5. EURO  ");
    scanf("%d",&a);

    printf("\nSelect currency you want to change to:\n");
    printf("1. USD  2. GBP  3. INR  4. PKR  5. EURO  ");
    scanf("%d",&b);

    printf("\nEnter Amount of currency: ");
    scanf("%lf",&amount);

    if (a == 1 && b == 2){
       GBP = GBP / USD * amount;
		printf("USD: %lf =  %lf GBP ",amount,GBP);
	} else if (a == 1 && b == 3){
        INR=INR / USD * amount;
		printf("USD: %lf = %lf INR",amount,INR);  
	} else if (a == 1 && b == 4){
        PKR=PKR / USD * amount;
		printf("USD: %lf =  %lf PKR ",amount,PKR);  
	} else if (a == 1 && b == 5){
        EURO=EURO / USD * amount;
		printf("USD: %lf =  %lf EURO ",amount,EURO); 
    }

    else if (a == 2 && b == 1){
            USD=USD / GBP * amount;
		printf("GBP: %lf =  %lf USD ",amount,USD);  
	} else if (a == 2 && b == 3){
        INR=INR / GBP * amount;
		printf("GBP: %lf =  %lf INR ",amount,INR);  
	} else if (a == 2 && b == 4){
        PKR= PKR / GBP * amount;
		printf("GBP: %lf =  %lf PKR ",amount,PKR); 
	} else if (a == 2 && b == 5){
        EURO=EURO / GBP * amount;
		printf("GBP: %lf =  %lf EURO ",amount,EURO); 
    }

    else if (a == 3 && b == 4){
        PKR=PKR / INR * amount;
		printf("INR: %lf =  %lf PKR ",amount,PKR); 
	} else if (a == 3 && b == 1){
        USD=USD / INR * amount ;
		printf("INR: %lf =  %lf USD ",amount,USD); 
	} else if (a == 3 && b == 2){
        GBP=GBP / INR * amount;
		printf("INR: %lf =  %lf GBP ",amount,GBP); 
	} else if (a == 3 && b == 5){
        EURO=EURO / INR * amount;
		printf("INR: %lf =  %lf EURO ",amount,EURO);
    }

    else if (a == 4 && b == 1){
       USD=USD / PKR * amount; 
		printf("PKR: %lf =  %lf USD ",amount,USD);
	} else if (a == 4 && b == 2){
        GBP=GBP / PKR * amount; 
		printf("PKR: %lf =  %lf GBP ",amount,GBP);
	} else if (a == 4 && b == 3){
        INR=INR / PKR * amount ;
		printf("PKR: %lf =  %lf INR ",amount,INR);
	} else if (a == 4 && b == 5){
        EURO=EURO / PKR * amount;
		printf("PKR: %lf =  %lf EURO ",amount,EURO);
    }

    else if (a == 5 && b == 1){
        USD=USD / EURO * amount; 
		printf("EURO: %lf =  %lf USD",amount,USD);
	} else if (a == 5 && b == 2){
        GBP=GBP / EURO * amount;
		printf("EURO: %lf =   %lf GBP",amount,GBP);
	} else if (a == 5 && b == 3){
        INR=INR / EURO * amount; 
		printf("EURO: %lf =  %lf INR ",amount,INR);
	} else if (a == 5 && b == 4){
        PKR=PKR / EURO * amount;
		printf("EURO: %lf =  %lf PKR ",amount,PKR); 
	} 
    else
    {
       printf("Invalid value ");
		printf("\nPlease Select valid Number");
    } 
    return 0;
}
		
	







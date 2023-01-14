#include <iostream>
using namespace std;
int main(){
	again:
	int a, b;
	double amount;
	double USD = 1;
	double GBP = 0.83;
	double INR = 81.36;
	double PKR = 225.39;
	double EURO = 0.95;
	cout <<"----------- Currency Converter -----------"<<endl;
	cout <<"\nSelect currency(i.e: 1) you want to change from:\n "<<endl;
	cout <<"1. USD  2. GBP  3. INR  4. PKR  5. EURO  "<<endl;
	cin >> a;
	
	cout <<"\nSelect currency you want to change to:\n "<<endl;
	cout <<"1. USD  2. GBP  3. INR  4. PKR  5. EURO"<<endl;
	cin >> b;
	
	cout << "\nEnter amount of your currency: "<<endl;
	cin >> amount;
	
	if (a == 1 && b == 2){
		cout << "USD: "<< amount <<" is equal to GBP: "<< GBP / USD * amount <<endl;
	} else if (a == 1 && b == 3){
		cout << "USD: "<< amount <<" is equal to INR: "<< INR / USD * amount <<endl;
	} else if (a == 1 && b == 4){
		cout << "USD: "<< amount <<" is equal to PKR: "<< PKR / USD * amount <<endl;
	} else if (a == 1 && b == 5){
		cout << "USD: "<< amount <<" is equal to EURO: "<< EURO / USD * amount <<endl;
		
	} else if (a == 2 && b == 1){
		cout << "GBP: "<< amount <<" is equal to USD: "<< USD / GBP * amount <<endl;
	} else if (a == 2 && b == 3){
		cout << "GBP: "<< amount <<" is equal to INR: "<< INR / GBP * amount <<endl;
	} else if (a == 2 && b == 4){
		cout << "GBP: "<< amount <<" is equal to PKR: "<< PKR / GBP * amount <<endl;
	} else if (a == 2 && b == 5){
		cout << "GBP: "<< amount <<" is equal to EURO: "<< EURO / GBP * amount <<endl;
	
	} else if (a == 3 && b == 4){
		cout << "INR: "<< amount <<" is equal to PKR: "<< PKR / INR * amount <<endl;
	} else if (a == 3 && b == 1){
		cout << "INR: "<< amount <<" is equal to USD: "<< USD / INR * amount <<endl;
	} else if (a == 3 && b == 2){
		cout << "INR: "<< amount <<" is equal to GBP: "<< GBP / INR * amount <<endl;
	} else if (a == 3 && b == 5){
		cout << "INR: "<< amount <<" is equal to EURO: "<< EURO / INR * amount <<endl;
	
	} else if (a == 4 && b == 1){
		cout << "PKR: "<< amount <<" is equal to USD: "<< USD / PKR * amount <<endl;
	} else if (a == 4 && b == 2){
		cout << "PKR: "<< amount <<" is equal to GBP: "<< GBP / PKR * amount <<endl;
	} else if (a == 4 && b == 3){
		cout << "PKR: "<< amount <<" is equal to INR: "<< INR / PKR * amount <<endl;
	} else if (a == 4 && b == 5){
		cout << "PKR: "<< amount <<" is equal to EURO: "<< EURO / PKR * amount <<endl;
		
	} else if (a == 5 && b == 1){
		cout << "EURO: "<< amount <<" is equal to USD: "<< USD / EURO * amount <<endl;
	} else if (a == 5 && b == 2){
		cout << "EURO: "<< amount <<" is equal to GBP: "<< GBP / EURO * amount <<endl;
	} else if (a == 5 && b == 3){
		cout << "EURO: "<< amount <<" is equal to INR: "<< INR / EURO * amount <<endl;
	} else if (a == 5 && b == 4){
		cout << "EURO: "<< amount <<" is equal to PKR: "<< PKR / EURO * amount <<endl;
	} else {
		system("CLS");
		cout << "\n\t    Incorrect Input "<<endl;
		cout << "\n      Please Select valid Number"<<endl;
		goto again;
	}
	return 0;
}
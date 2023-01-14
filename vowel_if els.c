#include<stdio.h>
int main()
{
    char c;
    printf("Enter Any Alphabet:");
    scanf("%c",&c);
    int lowercase_Vowels;
    int lowercase_Vowels;
    lowercase_Vowels=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
    lowercase_Vowels=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' );
    if(lowercase_Vowels || lowercase_Vowels)
    {
        printf(" %c is a vowel",c);
    }
    return 0;
}
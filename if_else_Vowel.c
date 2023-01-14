#include<stdio.h>
int main()
{
    char Small_Vowel;
    char Capital_Vowel;
    char C;
    printf("Enter Any Number:");
    scanf("%c",&C);
    Small_Vowel=( C=='a'|| C=='e' || C=='i' || C=='o' || C=='u' );
    Capital_Vowel=( C=='A' || C=='E' || C=='I' || C=='O' || C=='U');
    if(Small_Vowel || Capital_Vowel)
    {
        printf("%c is a Vowel",C);
    }
   else
   {
    printf("%c is a Consonant",C);
   }
    return 0;
}
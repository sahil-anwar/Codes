#include<stdio.h>
//Function//
 char Vowel(char Alphabet)
{
     //--User_Console--//
    printf("Enter any Alphabet:");
    scanf("%c",&Alphabet);
    //Switch_Case//
    switch(Alphabet)
    {
       
        //--Vowels--//
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("\nVowel:%c",Alphabet);
        break;
        //--Consonants--//
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
        case 't':
        case 'T':
        case 'v':
        case 'V':
        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':
        printf("\nConsonant:%c\n",Alphabet);
        break;
        //--Invalid_Input--//
        default:
        printf("\nIt is not an Alphabet:%c",Alphabet);
    }
}
int main()
{
    //--Program_will_repeat_Four_Times--//
    char Alphabet;
    Vowel(Alphabet);
    Vowel(Alphabet);
    return 0;
}
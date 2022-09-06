/*                       Assignment - 03
16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a 
    digit or a special character.
*/
#include<stdio.h>
int main()
{
    char h;
    printf("Enter the character to check: ");
    scanf("%c", &h);
    if (h >= 'A' && h <= 'Z')
    {
        printf("%c is a uppercase alphabet.", h);
    }
    else if (h >= 'a' && h <= 'z')
    {
        printf("%c is lowercase alphabet.", h);
    }
    else if ((h >= 48 && h <= 57) || (h >=32 && h<= 47) || (h >= 58 && h <= 64) || (h >= 91 && h <= 96) || (h >= 123 && h <= 126))
    {
        printf("%c is a Special character or a digit",h);
    }
    else
    {
        printf("%c is not an alphabet, digit and special character.", h);
    }
    return 0;
    
}
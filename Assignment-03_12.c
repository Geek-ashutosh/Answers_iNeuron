/*                Assignment - 03
12. Write a program to check whether a given alphabet is in uppercase or lowercase.
*/
#include <stdio.h>
int main()
{
    char f;
    printf("Enter the character to check: ");
    scanf("%c", &f);
    if (f >= 'A' && f <= 'Z')
    {
        printf("%c is uppercase alphabet.", f);
    }
    else if (f >= 'a' && f <= 'z')
    {
        printf("%c is lowercase alphabet.", f);
    }
    else
    {
        printf("%c is not an alphabet.", f);
    }
    return 0;
}
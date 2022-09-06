/*                  Assignment - 03
14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

*/
#include <stdio.h>
int main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    if ((i % 3 == 0) || (i % 7 == 0))
    {
        printf("Number is Divisible by 7 and 3");
    }
    else
    {
        if (i % 3 == 0)
            printf("Number is Divisible by 3");

        else
            printf("Number is not Divisible by 3 and 7");
    }
    return 0;
}
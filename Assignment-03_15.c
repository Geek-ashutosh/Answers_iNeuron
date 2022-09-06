/*                      Assignment - 03
  15. Write a program to check whether a given number is positive, negative or zero.
*/
#include <stdio.h>
int main()
{
    int num = -89;

    if (num < 0)
        printf("You entered a negative number.");
    else if (num > 0)
        printf("You entered a positive number.");
    else
        printf("You entered 0.");

    return 0;
}
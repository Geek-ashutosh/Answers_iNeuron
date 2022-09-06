/*                      Assignment - 03
13. Write a program to check whether a given number is divisible by 3 and divisible by 2
*/
#include<stdio.h>
int main()
{
    int o;
    printf("Enter the number: ");
    scanf("%d",&o);
    if( o % 2 == 0 && o % 3 == 0)
    {
        printf("Number is divisible by 2 and 3");
    }
    else
    {
        printf("Not divisible by 2 and 3");
    }
    return 0;
}
/*                       Assignment - 3
1. Write a program to check whether a given number is positive or non-positive.
*/
#include<stdio.h>
int main()
{
    float q;
    printf("Enter the number: ");
    scanf("%f",&q);
    if(q > 0)
    {
        printf("Entered number is positive.");
    }
    if (q <= 0)
    {
        printf("Entered number is non - positive.");
    }
    return 0;
}
/*                         Assignmemt - 03
 6. Write a program to print greater between two numbers. Print one number of both are the same
*/
#include <stdio.h>
int main()
{
    int a,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&c);


    if (a > c)
    {
        printf("a: %d is greater than c: %d", a, c);
    }
    else
    {
        if( a == c)
        {
          printf("a and c are equal : %d",a);
        }
        else
        {
          printf("c: %d is greater than a: %d", c, a);
        }
        
    }
    return 0;
}
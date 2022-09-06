/*   Assignment - 03
2. Write a program to check whether a given number is divisible by 5 or not.
*/
#include<stdio.h>
int main()
{
   int q,f;
    printf("Enter the number: ");
    scanf("%d",&q);
    f = q % 5;

    if(f == 0)
    {
        printf("Entered number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
    return 0;
}
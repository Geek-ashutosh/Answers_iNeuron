/*                    Assignment - 03
4. Write a program to check whether a given number is an even number or an odd number without using % operator
*/
#include<stdio.h>
int main()
{
    int g,k;
    printf("Enter the number: ");
    scanf("%d",&g);
     k = ((g / 2) * 2);
    
    if( k == g )
    {
      printf("Even number");
    }
    else
    {
      printf("Odd number");
    }

    return 0;

}
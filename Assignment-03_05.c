/*                    Assignment - 03
5. Write a program to check whether a given number is a three-digit number or not
*/
#include<stdio.h>
int main()
{
    int u;
    printf("Enter the number: ");
    scanf("%d", &u);
    if (u > 99 && u < 1000)
    {
       printf("%d is the three digit number.",u);    
    }
    else
    {
        printf("%d is not three digit number.",u);
    }
    return 0;

}

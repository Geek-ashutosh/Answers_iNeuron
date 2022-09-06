/*                         Assignment - 03
3. Write a program to check whether a given number is an even number or an odd number.
*/
#include<stdio.h>
int main()
{ 
    int r; 
    printf("Enter number : ");
    scanf("%d",&r);

    if(r % 2 == 0)
    {
       printf("\n Even number");
    }
    else
    {
        printf("\n Odd number");
    }
    return 0;      
}
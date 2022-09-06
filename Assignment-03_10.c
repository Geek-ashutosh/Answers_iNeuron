/*                           Assignment - 03
10. Write a program which takes the cost price and selling price of a product from the user. Now calculate 
    and print profit or loss percentage.
*/
#include<stdio.h>
int main()
{
    float cp,sp,loss,profit;
    printf("Enter the selling price : ");
    scanf("%f",&sp);
    printf("Enter the cost price : ");
    scanf("%f",&cp);
      profit = sp - cp;
      loss = cp - sp;
     //Loss % = Loss/Cost Price × 100.
     //profit % = profit/Cost Price × 100.
     char u;
     printf("For calculating the profit percentage enter P or enter the L for calculating the loss percentage :");
     scanf("%s",&u);

    if( u == 'P')
    {
         float profitPer = (profit/cp) * 100;
         printf("Profit percentage %% is: %f %%",profitPer); 
    }
    if( u == 'L')
    {
        float lossPer  = (loss/cp) * 100;
         printf("Loss percentage %% is: %f %%",lossPer); 
    }
   
   return 0;
}
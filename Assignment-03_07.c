/*                                 Assignment - 03
7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or 
   imaginary roots
*/
#include<stdio.h>
int main()
{
/* let's say quadratic equation is ax^2 + bx + c:

  The roots are calculated using the formula, x = (-b ± √ (b^2 - 4ac) )/2a.
  Discriminant is, D = b^2 - 4ac.
  If D > 0, then the equation has two real and distinct roots.
  If D < 0, the equation has two complex roots.
  If D = 0, the equation has only one real root.
*/
   int D = 12;
   if ( D > 0)
   {
     printf(" The equation has two real and distinct roots.");
   }
   else
   {
     if (D < 0)
     {
        printf("The equation has two complex roots.");
     }
     else
     {
        printf("The equation has only one real root.");
     }
    
    }

    return 0;
   
}

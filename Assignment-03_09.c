/*                           Assignment - 03
9. Write a program to find the greatest among three given numbers.Print number once if the greatest number
  appears two or three times.
*/
#include <stdio.h>
int main()
{
  int a = 12, c = 21, e = 121;

  if (a >= c && a >= e)
  {
    printf("%d is the greatest number.", a);
  }
  else
  {
    if (c >= a && c >= e)
    {
      printf("%d is the greatest number.", c);
    }
    else
    {
      printf("%d is the greatest number.", e);
    }
  
  }

  return 0;
}
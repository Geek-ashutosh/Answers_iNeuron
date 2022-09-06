/*                       Assignment - 03
11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing 
    marks is 33. Now display whether the candidate passed the examination or failed.

*/
#include<stdio.h>
int main()
{
    int marksHindi,marksEng,marksMath,marksScience,marksComputer;
    
    printf("Enter the marks of Hindi: ");
    scanf("%d",&marksHindi);
    
    printf("Enter the marks of English: ");
    scanf("%d",&marksEng);
    
    printf("Enter the marks of Maths: ");
    scanf("%d",&marksMath);
    
    printf("Enter the marks of Science: ");
    scanf("%d",&marksScience);
    
    printf("Enter the marks of Computer: ");
    scanf("%d",&marksComputer);
    
    if(marksHindi >= 33)
    {
        printf("\n Candidate passed the Hindi examination");
    }
    else
    {
        printf("\n Candidate failed in the Hindi examination");
    }

    if(marksEng >= 33)
    {
        printf("\n Candidate passed the English examination");
    }
    else
    {
       printf("\n Candidate failed in the English examination"); 
    }

    if(marksMath >= 33)
    {
        printf("\n Candidate passed the Math examination");
    }
    else
    {
       printf("\n Candidate failed in the Math examination"); 
    }
    
    if(marksScience >= 33)
    {
        printf("\n Candidate passed the Science examination");
    }
    else
    {
       printf("\n Candidate failed in the Science examination"); 
    }
    
    if(marksComputer >= 33)
    {
        printf("\n Candidate passed the Computer examination");
    } 
    else
    {
       printf("\n Candidate failed in the Computer examination"); 
    }

    return 0;

}
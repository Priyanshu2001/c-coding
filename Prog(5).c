/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
int main()
{
    int r,n,sum=0,t;
    printf("Enter the number:- ");
    scanf("%d",&n);
    t=n; //value of n is going to be changed at end of program
    while(n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
    if(t==sum)
    {
        printf("The given Number is a Palindrome");
    }
    else
    {
        printf("The given Number is not a Palindrome");
    }
    return 0;
    
}
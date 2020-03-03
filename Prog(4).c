/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
int main()
{
    int fact=1,i;
    printf("Enter the number:- ");
    scanf("%d",&i);
    while(i>0)
    {
        fact=fact*i;
        i--;
    }
    printf("Factorial of  given number is:- %d",fact);
    return 0;
}
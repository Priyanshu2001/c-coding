/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:- ");
    scanf("%d %d",&a,&b);
    printf("Original numbers are:- %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are:-  %d %d",a,b);
return 0;
}
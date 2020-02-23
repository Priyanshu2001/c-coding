/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
int main()
{
 int a,b,c;
    printf("Enter two numbers:-");
    scanf("%d %d",&a,&b);
    printf("Original numbers are:- %d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped numbers are:-  %d %d",a,b);
return 0;
}
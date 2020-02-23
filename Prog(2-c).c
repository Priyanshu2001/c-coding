/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
void swap(int *p,int *q) //Collecting addresses in pointer variable
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int main()
{
    int a,b;
    printf("Enter the  two numbers:- ");
    scanf("%d%d",&a,&b);
    printf("Original numbers are:- %d %d\n",a,b);
    swap(&a,&b); // Passing address to the function (Calling by refrence)
    printf("Swapped numbers are:-  %d %d",a,b);
    return 0;
}
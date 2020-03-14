/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
#include<math.h> //contains operations like root,power,etc.
int main()
{
    int n,r,count=0,t,sum=0;
    printf("Enter the number:- ");
    scanf("%d",&n);
    t=n;//valu of n is going to be changed
    while(n>0)
    {
        n/=10;
        count++;
    }
    n=t;// obtaining the original value of n
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);      
        n=n/10;
    }
    if(sum==t)
    {
        printf("The given number is Armstrong");
    }
    else
    {
        printf("The given number is not Armstrong");
    }
    return 0;
}
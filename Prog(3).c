/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:- ");
    scanf("%d",&y);
    if((y%400==0)||(y%100!=0&&y%4==0)) //Logic for year to be leap
    {
        printf("The year is leap yera");
    }
    else
    {
        printf("The year is not a leap year");
    }
    return 0;
}
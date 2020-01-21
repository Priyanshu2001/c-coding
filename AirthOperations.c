/* Author:- Priyanshu Bansal
Github Username :- Priyanshu2001 */
#include<stdio.h>
void main()
{
 float a,b,c,d,e,f;                             //All variableds can also be taken into int except f
 printf("Enter the two numbers:- ");
 scanf("%f%f",&a,&b);                            // %f is used for float type

 c=a+b;                  //To add two numbers   
 d=a-b;                 //To substract two numbers
 e=a*b;                //To multiply two numbers    
 f=a/b;               //To divide two numbers
    
printf("The addition of given two numbers is :- %f",c);
printf("\nThe substraction of given two numbers is :- %f",d);
printf("\nThe multiplication of given two numbers is :- %f",e);
printf("\nThe division of given two numbers is :- %f",f);
}


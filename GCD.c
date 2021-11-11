/*~Write a program to print GCD of given two numbers.~*/
#include<stdio.h>
int main()
{
int a,b,x,y,rem;
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
x=a;
y=b;
while(b!=0)
{
rem=a%b;
a=b;
b=rem;
}
printf("GCD of %d and %d is %d",x,y,a);
return 0;
}
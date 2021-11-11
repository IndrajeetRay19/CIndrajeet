/*~Write a program to print LCM of given two numbers.~*/
#include<stdio.h>
int main()
{
int a,b,x,y,rem,l;
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
l=(x*y)/a;
printf("LCM of %d and %d is %d",x,y,l);
return 0;
}
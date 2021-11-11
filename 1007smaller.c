/*~Write a program to print smaller number from given two numbers.~*/
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
if(a==b)
{
prinf("Both numbers are equal");
}
else if(a<b)
{
prinf("%d is smaller than %d",a,b);
}
else
{
prinf("%d is smaller than %d",b,a);
}
return 0;
}
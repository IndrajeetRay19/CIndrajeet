/*~Write a program to print largest number from given three numbers.~*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers ");
scanf("%d%d%d",&a,&b,&c);
if(a==b && a==c)
{
printf("All numbers are equal");
}
else if(a>=b && a>=c)
{
printf("%d is the largest number ",a);
}
else if(b>=c && b>=a)
{
printf("%d is the largest number ",b);
}
else
{
printf("%d is the largest number ",c);
}
return 0;
}

or,

#include<stdio.h>
int main()
{
int a,b,c,max;
printf("Enter three numbers ");
scanf("%d%d%d",&a,&b,&c);
if(a==b && a==c)
{
printf("All numbers are equal");
}
else
{
max=a;
if(b>max)
{
max=b;
}
if(c>max)
{
max=c;
}
printf("%d is the largest number",max);
}
return 0;
}
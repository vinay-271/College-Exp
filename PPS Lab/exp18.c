#include<stdio.h>
void main()
{
int n,a,rev=0,x=1,p;
scanf("%d",&n);
a = n;
while (n>0)
{

rev = (rev*10) + (n%10);
n /= 10;
x*=10;
}
printf("Reverse of %d is = %d\n",a,rev);
}

#include<stdio.h>
void main()
{
int n,a,r,sum=0;
scanf("%d",&n);
a = n;
while(n>0)
{
r = n%10;
sum += r;
n /= 10;
}
printf("Sum of digits of %d is = %d\n",a,sum);
}

#include<stdio.h>
#include<math.h>
void main()
{
int num = 1,a,b,c;
printf("Armstrong numbers are : \n");
while (num<10)
{
printf("%d\n",num);
num++;
}
while(num<=99)
{
a = num%10;
b = num/10;
c = (a*a) + (b*b);

if (num == c)
{
printf("%d\n",num);
}
num++;
}
}

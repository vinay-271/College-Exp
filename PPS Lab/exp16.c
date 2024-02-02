#include<stdio.h>

int main()
{
int n,d=0;
scanf("%d",&n);
for (int i = 2; i<n ; i++)
{
if (n%i == 0)
d+=1;
}
if (d == 0)
printf("%d is a Prime Number.\n",n);
else printf("%d is not a Prime number.\n",n);
return 0;
}

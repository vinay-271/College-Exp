#include<stdio.h>

int main()
{
int a1 = 0, a2 = 1,a3, n,t;
scanf("%d",&n);
printf("%d\n%d\n",a1,a2);
for (int i=2 ; i<=n ; i++)
{
printf("%d\n",a1 + a2);
a3 = a1;
a1 = a2;
a2 = a1 + a3;
}
return 0;
}

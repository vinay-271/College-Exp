#include<stdio.h>
void main()
{
	int a = 4,b = 6, c = 8, max;
	if (a>b)
		max = a;
	else 
		max = b;
	if (max > c)
		printf("%d is Greatest\n",max);
	else
		printf("%d is Greatest\n",c);
}

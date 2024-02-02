#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 5, b = 8,temp;

	printf("Before Swaping\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swaping\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
int i , n , S1 = 0 , S2 = 0;
printf("Enter the number : ");
scanf("%d",&n);
for (i = 1 ; i <= n ; i++)
{
if (i%2 == 0)
	S1 += i;
else
	S2 += i;
}
printf("Sum of Even numbers = %d\n",S1);
printf("Sum of Odd numbers = %d\n",S2);
getch();
return 0;
}
#include<stdio.h>
void main()
{
int year;
scanf("%d",&year);
if ((year % 4 == 0)&&(year %100 != 0)||(year % 400 == 0))
printf("Year %d is a LEAP Year.\n",year);
else printf("Year %d is a NOT LEAP Year.\n",year);
}
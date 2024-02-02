#include<stdio.h>
#include<conio.h>
int main()
{
	int math,sci,sst,hindi,eng;
	float perc;
	printf("Enter Marks of Maths, Science, SST, Hindi, English : ");
	scanf("%d%d%d%d%d",&math,&sci,&sst,&hindi,&eng);
	perc = (math+sci+sst+hindi+eng)/5;
	printf("Your Percentage is : %f",perc);
	getch();
	return 0;
}
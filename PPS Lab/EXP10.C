#include<stdio.h>
#include<conio.h>
int main()
{
	int math,sci,sst,hindi,eng;
	float perc;
	printf("Enter Marks of Maths, Science, SST, Hindi, English : ");
	scanf("%d%d%d%d%d",&math,&sci,&sst,&hindi,&eng);
	perc = (math+sci+sst+hindi+eng)/5;
	printf("Your Percentage is : %f\n",perc);
	if (perc > 100) printf("Marks entered are incorrect.\n");
	else if((perc<100)&&(perc>90)) printf("Grade is A\n");
	else if((perc<90)&&(perc>80)) printf("Grade is B\n");
	else if((perc<80)&&(perc>60)) printf("Grade is C\n");
	else if((perc<60)&&(perc>0)) printf("Grade is D\n");
	getch();
	return 0;
}
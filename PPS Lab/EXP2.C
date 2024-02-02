#include<stdio.h>
#include<math.h>
#include<conio.h>
float si(float prin , float rate , float time)
{
	float simple_interest;
	simple_interest = (prin*rate*time)/100;
	return simple_interest;
}
float ci(float prin , float r , float time)
{
	float c_amt,c_int;
	c_amt = prin*pow((1+r/100),time);
	c_int = c_amt - prin;
	return c_int;
}
void main()
{
	float principal,r,t,s_int,comp_int;
	scanf("%f%f%f",&principal,&r,&t);
	s_int = si(principal,r,t);
	comp_int = ci(principal,r,t);
	printf("Simple Interest = %f\n",s_int);
	printf("Compound Interest = %f",comp_int);
	getch();
}

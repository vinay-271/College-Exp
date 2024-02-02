#include<stdio.h>
#include<conio.h>
float a (float r)
{
	float area;
	area = 3.1415926*r*r;
	return area;
}
float c(float r)
{
	float circum = 2*3.1415926*r;
	return circum;
}
void main()
{
	float radius,Area,Circum;
	scanf("%f",&radius);
	Area = a(radius);
	Circum = c(radius);
	printf("Area = %f\n",Area);
	printf("Circumference = %f",Circum);
	getch();
}

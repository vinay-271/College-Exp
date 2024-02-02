 #include<stdio.h>
 #include<conio.h>
 float faren(float cel_t)
 {
	float faren_temp;
	faren_temp = 32 + (9*cel_t/5);
	return faren_temp;
 }
 int main()
 {
	float temp,f_temp;
	printf("Enter the Temperature in Centigrade : ");
	scanf("%f",&temp);
	f_temp = faren(temp);
	printf("\nTemperature in Farenheit in : %f\n",f_temp);
	getch();
	return 0;
 }

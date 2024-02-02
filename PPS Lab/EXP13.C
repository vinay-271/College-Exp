#include <stdio.h>
#include<conio.h>
int main() {
    long int n,i,f = 1;
    printf("Enter the number : ");
    scanf("%ld",&n);
    for (i=n ; i>=1 ; i--)
    {
	f=f*i;
    }
    printf("%ld! = %ld",n,f);
    getch();
    return 0;
}
#include<stdio.h>
#include<math.h>

void bin_to_dec(int bin)
{   
    int sum,i;
    while (bin != 0)
    {
        int a = bin%10;
        sum += a * pow(2,i);
        i++;
        bin /= 10;
    }
    printf("%d\n",sum);
}

void dec_to_bin(int dec)
{

}

int main()
{
    int bin = 10010111;
    bin_to_dec(bin);

    return 0;
}
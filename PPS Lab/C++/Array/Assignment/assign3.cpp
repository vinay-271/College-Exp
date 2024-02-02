// Given an integer array and its size, reverse the array and print it . Here 1<size<101
#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5}, len;
    len = sizeof(a)/sizeof(a[0]);
    int b[len];
    int j=len-1;
    for (int i=0 ; i<len ; i++){
        b[j--] = a[i];
    }
    for (int i=0 ; i<len ; i++){
        cout<<b[i]<<endl;
    }

    return 0;
}
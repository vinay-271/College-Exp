//Given an integer array and its size, find the sum of the greatest and the smallest integer present
//in the array. Here 1< size <101
#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int smallest = a[0] , greatest = a[0], len;
    len = sizeof(a)/sizeof(a[0]);
    for (int i=0 ; i<len ; i++){
        if (a[i] > greatest){
            greatest = a[i];
        }else if (a[i] < smallest){
            smallest = a[i];
        }
    }
    cout<<"Greatest element = "<<greatest<<endl;
    cout<<"Smallest element = "<<smallest<<endl;
    cout<<"Sum of Greatest & Smallest element = "<<greatest + smallest<<endl;
    
    return 0;
}
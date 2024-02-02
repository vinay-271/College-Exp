//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array
#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int even=0 , odd=0 , len;
    len = sizeof(a)/sizeof(a[0]);
    for (int i=0 ; i<len ; i++){
        if (a[i] % 2 == 0){
            even++;
        }
        else{odd++;}
    }
    cout<<"No. of Even elements = "<<even<<endl;
    cout<<"No. of Odd elements = "<<odd<<endl;
    

    return 0;
}
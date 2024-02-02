// check if the given array is sorted or not
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    //int arr[] = {2,1,5,3,5,7};
    int len = 6;
    bool sorted = true;
    for (int i = 1; i < len ; i++){
        if (arr[i] <= arr[i-1]){
            sorted = false;
        }
    }
    if (sorted == true){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array isn't sorted,"<<endl;
    }
    return 0;
}
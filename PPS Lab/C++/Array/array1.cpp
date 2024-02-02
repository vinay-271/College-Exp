#include<iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int a,b,small,large;
    for(int i=0 ; i<7 ; i++){
        a = array[i];
        for (int j=i; j<7 ; j++){
            if (a > array[j]){
                small = array[j];
            }
        }
        for (int j=i ; j < 7 ; j++){
            if (a < array[j]){
                large = array[j];
            }
        }
    }
    cout<<small + large;

    return 0;
}
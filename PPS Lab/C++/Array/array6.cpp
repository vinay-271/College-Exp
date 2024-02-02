//Find the unique element in array with all the elements being repeated atleast twice
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,1,2,2,3,3,4,4,5,6,6,7,7,8,9,11,12,12};  int size = 18;
    int unique = -1;
    for (int i=0 ; i<size ; i++){
        for (int j = i+1 ; j<size ; j++){
            if (a[i] == a[j]){
                a[i] = a[j] = -1;
            }
        }
    }
    for (int i=0 ; i<size ; i++){
        if (a[i]>=1)
            cout<<a[i]<<", ";
    }
    return 0;
}
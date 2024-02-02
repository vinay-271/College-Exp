//Target sum - Find the total no. of Triplets in the array whose sum is equal to the given value x.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int tar = 15, count =0;
    for (int i=0 ; i<20 ; i++){
        for(int j=i+1 ; j<20 ; j++){
            for (int k=j+1 ; k<20 ; k++){
                if ((arr[i] + arr[j] + arr[k]) == tar){
                    count++;
                    cout<<"( "<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<" )"<<endl;
                }
            }
        }
    }
    cout<<"No. of triplets = "<<count<<endl;

    return 0;
}
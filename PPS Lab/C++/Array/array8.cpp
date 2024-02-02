/*
Rotating an array by k steps
k can be greater than n.

eg. arr[] = {1,2,3,4,5}
k = 2;
then ans_arr[] = {4,5,1,2,3}
if k = 4 then ans_arr[] = {2,3,4,5,1}

if k = 5, then ans_arr[] = {1,2,3,4,5}
*/
#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5} , n = 5 , k = 4 , j = 0;
    int ans_a[5];
    k %= n;
    for (int i = n-k ; i<5 ; i++){
        ans_a[j++] = a[i];
    }
    for (int i = 0 ; i <= k ; i++){
        ans_a[j++] = a[i];
    }
    for (int i = 0 ; i<n ; i++){
        cout<<ans_a[i]<<" ";
    }



    return 0;
}
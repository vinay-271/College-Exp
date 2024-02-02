//Target Sum - Find the total no. of pairs in the array whose sum is equal to the given value x.
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int target = 7 , count = 0;
    for (int i=0 ; i < 16 ; i++)
    {
        for (int j = i ; j < 16 ; j++)
        {
            if (i == j)
            continue;

            else if ((arr[i] + arr[j]) == target){
                cout <<"( "<<arr[i]<<", "<<arr[j]<<" )"<<endl;
                count++;
            }
        }
    }
    cout<<"Total no. of Pairs = "<<count<<endl;
    return 0;
}
    
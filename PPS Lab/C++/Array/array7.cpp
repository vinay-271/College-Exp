/*Find the second largest element in the arrray
Method - 1 =>

First sort the array and then print second-last(if in ascending) element as Second largest.

Method - 2 =>

Find the Largest number and change it to zero or -1 and then again find the largest number, that will be the second largest element in the array.
*/
#include<bits/stdc++.h>
using namespace std;

int largest(int array[],int n)
{
    int lar = array[0];
    int idx = -1;
    for (int i=1 ; i<n ; i++){
        if (lar < array[i]){
            idx = i;
            lar = array[i];
        }
    }   

    return idx;
}

int main()
{
    int a[] = {3,2,6,8,23,5,34,23,76,89,54,756,3,4,65,656};
    int size = (sizeof(a)/sizeof(a[0])), idx;
    
    idx = largest(a,size);
    a[idx] = -1;
    idx = largest(a,size);
    cout << "The second largest element is "<<a[idx]<<endl;

    return 0;
}
/* Give Q queries, check if the queries are present in the array or not.
Value of all the elements is less than 10 raised to the power of 4.

Method 1 => Brute force method i.e. Traverse entire array and look for the desired element.
Method 2 => Make another array (sample_array[10^5]) of size 10^5 and initialize with all elements as 0. Then increase value by 1 at sample_array[Q].



int main() {
  
  return 0;
}

*/
#include<iostream>
#include <string.h>

int main()
{
    int queries[] = {1,2,54,567,23,546,879,34,67,32,67,768,43,5,65,7,3,65,67,8,433,56,7,4,5};
    int size = sizeof(queries)/sizeof(queries[0]);
    int sample_array[100000];
    int* array = (int*)malloc(10 * sizeof(int));
    memset(array, 0, 10 * sizeof(int));
    for (int i = 0 ; i<size ; i++){
        sample_array[queries[i]]++;
    }
    for (int i=0 ; i<100000 ; i++){
        if (sample_array[i] > 0)
            std::cout<<sample_array[i]<<" ";
    }
    return 0;
}
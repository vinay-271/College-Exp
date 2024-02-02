//last occurence of the element in the vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v(5);
    for (int i=0 ; i < v.size() ; i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;

    int occurence = 0;
    for (int i=0 ; i < v.size(); i++){
        if (v[i] == x){
            ++occurence;
        }
    }
    cout<<"x has occured "<<occurence<<" times."<<endl;
}
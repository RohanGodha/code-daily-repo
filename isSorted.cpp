// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isSorted(int *arr, int n)
{
    if(n<2) {return 1;}
    if(arr[0]>arr[1]) {return 0;}
    else {
        bool rem= isSorted(arr+1,n-1);
        return rem;
    }
}
int main() {
    // Write C++ code here
    int arr[5]={55,66,76,85,97};
    int n=5;
    bool b=isSorted(arr,n);
    if(b) 
{    cout<<"Sorted";
}    else 
{cout<<"Not Sorted";}
    return 0;
}
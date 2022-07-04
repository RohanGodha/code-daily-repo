// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
cout <<"Bubble Sort!"<<endl;
int arr[10]={22,21,3,43,12,9,1,54,76,33};
for(int i=0;i<10;i++)
{
    for(int j=0;j<10-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
    swap(arr[j],arr[j+1])
        }
    }
}
cout <<"Sorted Array is:\n";
for(int i=0;i<10;i++)
{
cout<<(i+1)<<" : "<<arr[i]<<endl;    
}
    return 0;
}

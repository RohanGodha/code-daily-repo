#include <iostream>
using namespace std;
int main() 
{
int arr[5]={10,2,15,23,34};
//SORTING
for(int i=0;i<4;i++)
{
int min=i;;
for(int j=i+1;j<5;j++)
{
    if(arr[min]>arr[j])
    {
        min=j;
    }
}
swap(arr[min],arr[i]);
}
cout<<"Swapped is:";
for(int i=0;i<5;i++)
{
cout<<"arr[i] : "<<arr[i]<<" ";    
}
return 0;
}

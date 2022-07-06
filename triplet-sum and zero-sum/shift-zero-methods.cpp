// Online C++ compiler to run C++ program online
//Method 1: Copy Elements from new array where all elements are sorted if 0 or not
//Method 2: <Below One> New Array is formed for only elements being non-zero and items are replaced.
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={0,0,3,0,1,0,0,6,0,2},temp[10],count=0,j;
    for(int i=0;i<10;i++)
    {
        if(arr[i]!=0)
        {   
            temp[count]=arr[i];
            count++;
        }
    }
    for(j=0;j<count;j++)
    {
        arr[j]=temp[j];
    }
    for(int i=count+1;i<10;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"\n"<<i+1<<": "<<arr[i]; 
    }
    return 0;
}

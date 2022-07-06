// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int tripSum(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
              if((arr[i]+arr[j]+arr[k])==key)
              {
                  cout<<"\n\nThe indexes and number are: \nIndex "<<i<<" : "<<arr[i]<<"\nIndex "<<j<<" : "<<arr[j]<<"\nIndex "<<k<<" : "<<arr[k];
              }
            }
        }
    }
    return 0;
}
int main()
{
    cout<<"Triplet Sum- Method 2\n";
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n],key;
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Sum to find: ";
    cin>>key;
    tripSum(arr,n,key);
    return 0;
}

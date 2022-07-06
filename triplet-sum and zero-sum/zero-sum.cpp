// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int zerosum(int arr[],int n)
{
    int sum=arr[0],count=0;
    for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
              if(sum==0)
              {
                  cout<<"True\n";
                  sum+=arr[j];
                  count++;
                  break;
              }
              else
              {
                  sum+=arr[j];
              }           
                
            }
        }
        if(count==0)
        {
            cout<<"No Subarray has 0 sum";
        }
return 0;
}
int main()
{
    cout<<"Zero Sum Array\n";
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n],key;
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<i+1<<": ";
        cin>>arr[i];
    }
    zerosum(arr,n);
    return 0;
}

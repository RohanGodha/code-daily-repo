// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int num,arr[10]={1,2,3,4,5,6,7,8,9,10},min=0,max=sizeof(arr);
    cout<<"Number to be searched is: ";
    cin>>num;
    int begin=arr[min],end=arr[max], mid=arr[max/2];
    while(mid!=num)
    {
        if(num<mid)
        {
            max/=2;
            mid=arr[(max-min)/2];
        }
        else if(num>mid)
        {
            min=max/2;
            mid=arr[(max-min)/2];
        }
        else if(num==mid)
        {
            cout<<"Number found at index: "<<(max-min)/2;
        }
        else
        {
        cout<<"Not Existing in this array.";    
        }
        
    }
    cout<<"Number found at index: "<<(max-min)/2;
    return 0;
}

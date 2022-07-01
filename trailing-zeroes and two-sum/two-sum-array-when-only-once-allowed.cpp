#include <iostream>
using namespace std;
int main() {
    int arr[5]={2,3,1,5,4},sum,a=0,b=0;
    cout<<"Enter Sum Required: ";
    cin>>sum;
    for(int i=0;i<sizeof(arr);i++)
    {
        a=arr[i];
        for (int j=i+1;j<sizeof(arr);j++)
        {
            b=arr[j];
            int add=a+b;
            if(add==sum)
            {
                cout<<"Pair is:("<<a<<","<<b<<")"<<endl;
            }
        }
    }
    return 0;
}

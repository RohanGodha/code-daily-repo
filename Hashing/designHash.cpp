#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
using namespace std;
#define MAX 1000

bool hasher[MAX+1][2];

bool search(int x)
{
    if(x>=0)
    {
        return hasher[x][0]==1?1:0;
        // else return 0;
    }
    else
    {
        x=abs(x);
        if(hasher[x][1]==1) return 1;
        else return 0;
    }
}

void insert(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]>=0)
        {
            hasher[arr[i]][0]=1;
        }
        else{
            hasher[abs(arr[i])][1]=1;
        }
    }

}
int main()
{
    int arr[]={-1,9,2,-5,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    insert(arr,size);
    int find=-3;
    if(search(find)) 
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
    return 0;
}
//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        unordered_map<string, int> umap;
        int i = 0;
        while(i < n)
        {
            umap[arr[i]]++;
            i++;
        }
        string mName = "";
        int mMax = 0;
        for(auto itr = umap.begin(); itr != umap.end(); itr++)
        {
            string name = itr->first;
            int val = itr->second;
            if(val > mMax)
            {
                mName = name;
                mMax = val; 
            }
            else if(val == mMax)
            {
                if(mName > name)
                {
                    mName = name;
                }
            }
        }
        vector<string> v;
        v.push_back(mName);
        v.push_back(to_string(mMax));
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
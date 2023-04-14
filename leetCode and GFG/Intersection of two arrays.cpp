//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        unordered_set<int> countSet;
        for(int i=0;i<n;i++)
        {
            countSet.insert(a[i]);
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            int key=b[i];
            if(countSet.find(key)!=countSet.end()) 
            {
                count++;
                countSet.erase(key);
            }
            
        }
        return count;
    }
    // {
    // vector<int> v;
    // for(int i=0;i<n;i++)
    // {
    //     v.push_back(a[i]);
    // }
    // for(int i=0;i<m;i++)
    // {
    //     v.push_back(b[i]);
    // }
    
    // unordered_map<int,int> umap;
    // int count=0,s=v.size();
    // for(int i=0;i<s;i++)
    // {
    //     umap[v[i]]++;
    // }
    // for(int i=0;i<s;i++)
    // {
    //     int key=v[i];
    //     auto temp=umap.find(key);
    //     if(temp->second>1) count++;
    // }
    // return count;
    // // Your code goes here
    // }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends
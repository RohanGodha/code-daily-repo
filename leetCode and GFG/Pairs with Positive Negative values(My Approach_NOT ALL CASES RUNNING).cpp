//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) 
    {
    vector<int> v;
    unordered_set<int> u;
    for(int i=0;i<n;i++)
    {
        u.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int key=-a[i];
        // auto temp=key;
        if(u.find(key)!=u.end())
        {
            if(a[i]<0)
            {
               v.push_back(a[i]);
               v.push_back(key);
            }
            else 
            {
               v.push_back(key);    
               v.push_back(a[i]);
            }
            // u.erase(key);
            u.erase(a[i]);
        }
    }
    
    return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
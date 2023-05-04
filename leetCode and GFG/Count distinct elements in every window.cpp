//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector<int> countDistinct(int arr[], int n, int k)
{
    vector<int> result;
    unordered_map<int, int> freq;
    set<int> s;

    for (int i = 0; i < k; i++) {
        freq[arr[i]]++;
        s.insert(arr[i]);
    }
    result.push_back(s.size());

    for (int i = k; i < n; i++) {
        freq[arr[i - k]]--;
        if (freq[arr[i - k]] == 0)
            s.erase(arr[i - k]);

        freq[arr[i]]++;
        s.insert(arr[i]);

        result.push_back(s.size());
    }

    return result;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

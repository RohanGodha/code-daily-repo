//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int left[n], right[n];
        long long res = 0;
        int maxLeft = 0, maxRight = 0;
        for (int i = 0; i < n; i++) {
            maxLeft = max(maxLeft, arr[i]);
            left[i] = maxLeft;
        }
        for (int i = n - 1; i >= 0; i--) {
            maxRight = max(maxRight, arr[i]);
            right[i] = maxRight;
        }
        for (int i = 0; i < n ; i++) {
            res += (min(left[i], right[i]) - arr[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends

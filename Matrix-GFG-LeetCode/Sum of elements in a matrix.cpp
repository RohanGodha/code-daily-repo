//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int sumOfMatrix(int I, int J, vector<vector<int>> vec) {
        int sum=0;
        for(int i=0;i<I;i++)
        {
            for(int j=0;j<J;j++)
            {
                sum+=vec[i][j];
            }
        }
        
        // code here
    
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Grid(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Grid[i][j];
        Solution ob;
        cout << ob.sumOfMatrix(N, M, Grid) << "\n";
    }
}
// } Driver Code Ends

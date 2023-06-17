//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    long long int rev = 0;
    
    long long int reverse_digit(long long int n) {
        if (n == 0) {
            long long int result = rev;
            rev = 0;
            return result;
        }
        
        rev = rev * 10 + (n % 10);
        
        return reverse_digit(n / 10);
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends

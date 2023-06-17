//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		  long long int ans=0;
		  while(n)
		  {
		      ans=ans*10+(n%10);
		      n/=10;
		  }
		  return ans;
		  //  int res=0;
		  //  if(n==0) return (res/1);
		  //  reverse_digit(n/10);
		  //  res+=n%10;
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

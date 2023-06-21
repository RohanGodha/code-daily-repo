//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    return check(S, 0, S.size() - 1);
	}
	bool check(string& s, int start, int end) {
    if (start >= end)
        return true;
    if (s[start] != s[end])
        return false;
    return check(s, start + 1, end - 1);
}

    // bool check(string& s) {
    // return check(s, 0, s.size() - 1);
    // }

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends

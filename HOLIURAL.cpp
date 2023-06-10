#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int T;
	cin>>T;
	while(T--){
	    long long int N , K , ANS = INT_MAX;
	    cin>>N>>K;
	    vector<long long int> arr(N,0);
	    for(long long int i = 0;i<N;i++){
	        // distance from home 
	        cin>>arr[i];
	        arr[i] = arr[i] * K;
	    }
	    for(long long int i = 0;i<N;i++){
	        // cost of color per unit 
	        long long int temp ;
	        cin>>temp;
	        arr[i] += temp;
	       // arr[i] = arr[i] * K;
	    }
	   // cout<<ANS<<endl;
	   sort(arr.begin(),arr.end());
	   cout<<arr[0]<<endl;
	}
	return 0;
}

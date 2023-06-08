#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	stack<string> A,B;
	long long int Q;
	cin>>Q;
	while(Q--){
	    int type ;
	    cin>>type;
	    if(type == 1){
	        string s;
	        cin>>s;
	        A.push(s);
	        if(A.empty()) cout<<"Nil"<<endl;
	        else cout<<A.top()<<endl;
	       // cout<<(A.empty())?"Nil":A.top()<<endl;
	    }
	    else if(type == 2){
	        long long int K;
	        cin>>K;
	        // A to B
	        while(K-- && !A.empty()){
	            string t = A.top();
	            A.pop();
	            B.push(t);
	        }
	        if(A.empty()) cout<<"Nil"<<endl;
	        else cout<<A.top()<<endl;
	    }
	    else{
            // B to A
            long long int K;
	        cin>>K;
	        // A to B
	        while(K-- && !B.empty()){
	            string t = B.top();
	            B.pop();
	            A.push(t);
	        }
	        if(A.empty()) cout<<"Nil"<<endl;
	        else cout<<A.top()<<endl;
	    }
	}
	return 0;
}

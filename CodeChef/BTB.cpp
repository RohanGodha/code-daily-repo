#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int T = 0;
	cin>>T;
	while(T--){
	    long long int N , Q;
	    cin>>N>>Q;
	    long long int sum = 0 , mode = -1 , maxOccur = 0 , mean;
	    vector<long long int> visited(1e5 + 1,0);
	    for(long long int i = 0;i<N;i++){
	        long long int temp ;
	        cin>>temp;
	        sum += temp;
	        visited[temp]++;
	        if(visited[temp] > maxOccur){
	            mode = temp;
	            maxOccur = visited[temp];
	        }
	        else if(visited[temp] == maxOccur){
	            mode = min(mode,temp);
	        }
	    }
	    mean = sum / N;
	    while(Q--){
	        long long int type;
	        cin>>type;
	        if(type == 1){
	            // add an element
	            long long int X;
	            cin>>X;
	            sum += X;
	            N++;
	            mean = sum / N; //  mean  ends
	            visited[X]++; // mode starts
    	        if(visited[X] > maxOccur){
    	            mode = X;
    	            maxOccur = visited[X];
    	        }
    	        else if(visited[X] == maxOccur){
    	            mode = min(mode,X);
    	        }
	        }
	        else if(type == 2){
                cout<<mean<<endl;	            
	        }
	        else if(type == 3){
	            cout<<mode<<endl;
	        }
	    }
	}
	return 0;
}

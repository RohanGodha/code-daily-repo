// #include<bits/stdc++.h>
#include<unordered_set>
#include<iostream>
using namespace std;
int main()
{
unordered_set<int> s;

s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
s.insert(50);
s.insert(40);
s.insert(50);
s.insert(30);
s.insert(10);
s.insert(20);
s.insert(60);
s.insert(30);
s.insert(20);

for(auto it=s.begin(); it!=s.end();it++)
{
    cout<<*it<<endl;
}
cout<<"Size of S ="<<s.size();
cout<<s.find(30)==s.end()?"Not found":"found"<<endl;

s.erase(30);
cout<<"Size of S ="<<s.size();

cout<<s.find(30)==s.end()?"Not found":"found"<<endl;
cout<<"Size of S ="<<s.size();

cout<<s.count(20);
return 0;
}
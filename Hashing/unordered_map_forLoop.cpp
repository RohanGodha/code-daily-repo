#include<iostream>
#include<unordered_map>
// #include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, string> umap;
    umap["Name"]="Milk";
    umap["SirName"]="Mocha";
    for(auto x:umap)
    {
        cout<<x.first;
        cout<<" : ";
        cout<<x.second;
        cout<<endl;
    }

    
}
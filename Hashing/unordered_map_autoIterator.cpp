#include<iostream>
#include<unordered_map>
// #include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, string> umap;
    umap["Name"]="Milk";
    umap["SirName"]="Mocha";
    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first;
        cout<<" : ";
        cout<<itr->second;
        cout<<endl;
    }

    
}


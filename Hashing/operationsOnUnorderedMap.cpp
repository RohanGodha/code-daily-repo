#include<iostream>
#include<unordered_map>
// #include<bits/stdc++.h>
using namespace std;
int main()
{
    //Declaration
    unordered_map<string, string> umap;

    //Initial Elements Details
    umap["Name"]="Milk";
    umap["SirName"]="Mocha";

    //Traversing for auto: loop->itr iterator traversing
    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first;
        cout<<" : ";
        cout<<itr->second;
        cout<<endl;
    }

    //Size of map
    cout<<"Size is: "<<umap.size()<<endl;

    //Appending of Element by making pair
    umap.insert(make_pair("Address","Jaipur"));

    //Finding a key
    string key="Name";
    cout<<(umap.find(key)==umap.end()?"Not Found":"Found")<<endl;
    if(umap.find(key)!=umap.end())
    {
    auto temp=umap.find(key);
    cout<<"Key is: "<<temp->first<<" : ";
    cout<<"Value is: "<<temp->second<<endl;
    }

    //Erasing a key
    umap.erase("Name");

    //Traversing through auto: x
    for(auto x:umap)
    {
        cout<<x.first;
        cout<<" : ";
        cout<<x.second;
        cout<<endl;
    }

    //Clearing of map
    umap.clear();
    
}

 
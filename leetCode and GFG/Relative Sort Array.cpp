// https://leetcode.com/problems/relative-sort-array/description/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        unordered_set<int> s;
        int index=arr2.size();
        while(index--){
            s.insert(arr2[index]);
        }
        index=arr1.size();
        unordered_map<int,int> u;
        while(index--){
            u[arr1[index]]++;
        }
        vector<int> v;
        for (auto itr = s.begin(); itr != s.end(); itr++){
            int key=*itr;
            if(u.find(key)!=u.end()){
                // int size=u[]
                while((u[key]--))
                {
                    v.push_back(key);
                }
            }
        }
        vector<int> v2;
        for (auto pos : u){
            if(pos.second>0) {
                v2.push_back(pos.first);
                u[pos.first]--;
            }
        }
        sort(v2.begin(),v2.end());
        int n=v2.size();
        for(int i=0;i<n;i++){
            v.push_back(v2[i]);
        }
        return v;
    }
};
// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++) umap[nums[i]]++;
        for(int i=0;i<n;i++)
        {
            int key=nums[i];
            auto temp=umap.find(key);
            if(temp->second==1) return temp->first;
        }
        return -1;
    }
};
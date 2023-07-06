class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int> ans;
        vector<int> result;
        unordered_map<int, int> umap;
        int n=(nums.size())/3;
        for(auto x: nums){
            umap[x]++;
            if(umap[x]>n) ans.insert(x);
        }
        for(auto x: ans){
            result.push_back(x);
        }
        return result;
    }
};

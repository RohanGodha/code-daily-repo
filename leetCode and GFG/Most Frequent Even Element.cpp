class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        set<int> sett;
        unordered_map<int, int> umap;
        int maxOccurence=0, maxOccured=0;
        for(auto x: nums){
            if(x%2==0){
                umap[x]++;
                if(maxOccurence<umap[x]){
                    maxOccurence=umap[x];
                    maxOccured=x;
                }
            }
        }
        for(auto x: umap){
            if(x.second==maxOccurence) sett.insert(x.first);
        }
        return sett.empty() ? -1 : *(sett.begin());
    }
};

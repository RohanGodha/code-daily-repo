class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end()); 
            int n = stones.size();
            int diff = stones[n - 1] - stones[n - 2];
            if (diff == 0) {
                stones.pop_back();
                stones.pop_back();
            } else {
                stones[n - 2] = diff;
                stones.pop_back();
            }
        }
        return stones.empty() ? 0 : stones[0];
    }
};

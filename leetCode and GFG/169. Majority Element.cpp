class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int majority = 0;
        int maxCount = 0;     
        for (int x : nums) {
            count[x]++;
            if (count[x] > maxCount) {
                maxCount = count[x];
                majority = x;
            }
        }
        return majority;
    }
};


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int firstPositive = 1;
        int i = 0;
        sort(nums.begin(), nums.end());
        while (i < nums.size()) {
            if (nums[i] < 1) {
                i++;
                continue;
            } else if (nums[i] == firstPositive) {
                firstPositive++;
            } else if (nums[i] > firstPositive) {
                return firstPositive;
            }
            i++;
        }
        return firstPositive;
    }
};

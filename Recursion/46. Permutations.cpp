class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(nums, 0, res);
        return res;
    }

private:
    void solve(vector<int>& nums, int ind, vector<vector<int>>& res) {
        int n = nums.size();
        if (ind == n - 1) {
            res.push_back(nums);
            return;
        }
        
        // Tasks
        for (int i = ind; i < n; i++) {
            swap(nums[i], nums[ind]);
            solve(nums, ind + 1, res);
            swap(nums[i], nums[ind]);
        }
    }
};

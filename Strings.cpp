// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void generateSubsets(const vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    result.push_back(current);
    for (int i = index; i < nums.size(); ++i) {
        current.push_back(nums[i]);
        generateSubsets(nums, i + 1, current, result);
        current.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    sort(nums.begin(),nums.end());
    generateSubsets(nums,0,current, result);
    return result;
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsetsResult = subsets(nums);
    for (const auto& subset : subsetsResult) {
        cout << "[ ";
        for (const auto& num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}

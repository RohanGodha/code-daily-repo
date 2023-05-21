class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res=0,cur=0,start=0,end=0;

        while(end<nums.size()) {
            // If current elem is 0, increment curr by one
            if(nums[end] == 0) cur++;

            // if current element increases by 1, then increase the start pointer
            // until current element remains 1
            while(cur > 1) {
                if(nums[start]==0) cur--;
                start++;
            }
            // end-start, as we are excluding the 0 which is to be removed
            res = max(res, end-start);
            end++;
        }
        return res;
    }
};

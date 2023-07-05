class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorN=0;
       for(int i=0;i<nums.size();i++)
       {
         xorN^=nums[i];  //if same returns 0
       }
       return xorN;
    }
};

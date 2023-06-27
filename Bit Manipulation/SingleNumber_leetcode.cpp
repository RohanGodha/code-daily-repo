class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorN=0;
       for(int i=0;i<nums.size();i++)
       {
         xorN^=nums[i];  
       }
       return xorN;
    }
};

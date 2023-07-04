class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
    int maxSub=INT_MIN, maxN=0, n=nums.size();
    for(int i=0;i<n;i++)
    {
       maxN+=nums[i];
       if(maxSub<maxN) maxSub=maxN;
       if(maxN<0) maxN=0;
    }
    return maxSub;  
    }
};

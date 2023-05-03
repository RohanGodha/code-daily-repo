class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        int count=0, size=heights.size();
        vector<int> expect;
        copy(heights.begin(), heights.end(), back_inserter(expect));     
        sort(expect.begin(),expect.end());
        for(int i=0;i<size;i++)
        {
            if(expect[i]!=heights[i]) 
            {
                count++;
            }
        }
        return count;
    }
};

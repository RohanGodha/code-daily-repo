class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        if(n==1 || n==2) return n;
        int n1=countWays(n-1);
        int n2=countWays(n-2);
        int small= countWays(n-1)+countWays(n-2);
        return small;
    }
};

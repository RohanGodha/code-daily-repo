

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int upsum=0,lowsum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    lowsum+=matrix[i][j];
                    upsum+=matrix[i][j];
                }
                else if(i>j) lowsum+=matrix[i][j];
                else if(i<j) upsum+=matrix[i][j];
            }
        }
        
        // code here
        vector <int> v;
        v.push_back(upsum);
        v.push_back(lowsum);
        return v;
        // code here
    }
};

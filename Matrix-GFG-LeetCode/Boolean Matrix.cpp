//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int row = matrix.size();
        int col = matrix[0].size();
        
        bool arr_row[row]; fill(arr_row, arr_row+row, false);
        bool arr_col[col]; fill(arr_col, arr_col+col, false);
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 1){
                    arr_row[i] = true;
                    arr_col[j] = true;
                }
            }
        }
        
        for(int i=0;i<row;i++){
            if(arr_row[i]){
                for(int j=0;j<col;j++){
                    matrix[i][j]= 1;
                }
            }
        }
        
        for(int i=0;i<col;i++){
            if(arr_col[i]){
                for(int j=0;j<row;j++){
                    matrix[j][i] = 1;
                }
            }
        }
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends

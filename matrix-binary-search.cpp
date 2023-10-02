#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // Disable synchronization for faster I/O

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int key;
    cin >> key;
    
    int row = 0;
    int col = m - 1;

    // Start from the top-right corner of the matrix
    while (row < n && col >= 0)
    {
        if (a[row][col] == key)
        {
            cout << row << " " << col << endl;
            return 0;
        }
        else if (a[row][col] > key)
        {
            col--; // Move left in the same row
        }
        else
        {
            row++; // Move down to the next row
        }
    }

    cout << "Key not found" << endl;
    return 0;
}

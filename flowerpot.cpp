#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int key;
    cin >> key;
    int low = 0, high = n - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid][0] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    low = 0;
    int row = high;
    high = m - 1;
    mid = 0;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (a[row][mid] >= key) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    cout << row << " " << high;
    return 0;
}

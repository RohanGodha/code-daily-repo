#include <iostream>
#include <vector>
#include <algorithm>

int findLongestSequence(const std::vector<std::vector<int>>& matrix, int x, int y, int prev_val) {
    int n = matrix.size();
    if (x < 0 || x >= n || y < 0 || y >= n || matrix[x][y] != prev_val + 1)
        return 0;

    int right = findLongestSequence(matrix, x, y + 1, matrix[x][y]);
    int left = findLongestSequence(matrix, x, y - 1, matrix[x][y]);
    int down = findLongestSequence(matrix, x + 1, y, matrix[x][y]);
    int up = findLongestSequence(matrix, x - 1, y, matrix[x][y]);

    return 1 + std::max({right, left, down, up});
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int max_length = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            max_length = std::max(max_length, findLongestSequence(matrix, i, j, matrix[i][j]));
        }
    }

    if (max_length > 1)
        std::cout << max_length << std::endl;
    else
        std::cout << "I" << std::endl;

    return 0;
}

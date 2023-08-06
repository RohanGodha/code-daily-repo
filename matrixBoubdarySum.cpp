int matrixBoundarySum(int row, int col, int** mat) {
    int i, j, sum = 0;
    
    // Add top row elements to sum
    for (j = 0; j < col; j++) {
        sum += mat[0][j];
    }
    
    // Add bottom row elements to sum
    for (j = 0; j < col; j++) {
        sum += mat[row - 1][j];
    }
    
    // Add leftmost column elements to sum
    for (i = 1; i < row - 1; i++) {
        sum += mat[i][0];
    }
    
    // Add rightmost column elements to sum
    for (i = 1; i < row - 1; i++) {
        sum += mat[i][col - 1];
    }
    
    return sum;
}

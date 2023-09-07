def min_cost(cost, n, m):
    for i in range(1, n):
        for j in range(m):
            min_cost_val = cost[i-1][j]  # Rename min_cost to min_cost_val
            if j > 0:
                min_cost_val = min(min_cost_val, cost[i-1][j-1])
            if j < m - 1:
                min_cost_val = min(min_cost_val, cost[i-1][j+1])
            cost[i][j] += min_cost_val  # Use min_cost_val instead of min_cost
    
    return min(cost[n-1])  # Return the minimum value in the last row

# Sample Input
n = 5
m = 5
cost = [
    [1, 3, 1, 2, 6],
    [9, 2, 5, 4, 15],
    [8, 9, 6, 7, 1],
    [2, 7, 1, 5, 3],
    [8, 2, 6, 1, 9]
]

print(min_cost(cost, n, m))  # Output: 10

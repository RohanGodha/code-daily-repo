n = int(input())
arr = list(map(int, input().split()))

result = 0
for i in range(n):
    for j in range(i + 1, n):
        result ^= (arr[i] ^ arr[j])

print("XOR of all pairs:", result)

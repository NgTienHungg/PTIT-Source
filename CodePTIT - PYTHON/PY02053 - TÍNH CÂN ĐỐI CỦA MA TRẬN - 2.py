n = int(input())
matrix = [[]] * n
for i in range(n):
    matrix[i] = [int(i) for i in input().split()]

sum_up, sum_down = 0, 0
for i in range(n):
    for j in range(n):
        if j < n - 1 - i:
            sum_up += matrix[i][j]
        elif j > n - 1 - i:
            sum_down += matrix[i][j]

k = int(input())
sub = abs(sum_up - sum_down)
print('YES' if sub <= k else 'NO')
print(sub)

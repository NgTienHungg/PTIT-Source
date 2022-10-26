f = [1] * 93
for i in range(3, 93):
    f[i] = f[i - 1] + f[i - 2]

for t in range(int(input())):
    a, b = [int(i) for i in input().split()]
    for i in range(a, b + 1):
        print(f[i], end=' ')
    print()

n, m = [int(x) for x in input().split()]
a = [[0]] * n
for i in range(n):
    a[i] = [int(x) for x in input().split()]
if n < m:
    d = [1]
    b = []
    while m > n + len(d):
        d.append(d[-1] + 2)
    for i in range(n):
        for j in range(m):
            if not(j in d):
                print(a[i][j], end=' ')
        print()
else:
    d = []
    if n > m:
        d = [0]
    b = []
    while n > m + len(d):
        d.append(d[-1] + 2)
    for i in range(n):
        if not(i in d):
            for j in range(m):
                print(a[i][j], end=' ')
            print()

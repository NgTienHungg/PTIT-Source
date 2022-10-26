n, m = [int(x) for x in input().split()]
a = [[0]] * n
Max, Min, ok, k = 0, 10**6, 0, 0
for i in range(n):
    a[i] = [int(x) for x in input().split()]
    Max = max(Max, max(a[i]))
    Min = min(Min, min(a[i]))
for i in range(n):
    for j in range(m):
        if a[i][j] == Max - Min:
            if k == 0:
                ok = 1
                print(Max - Min)
                k = 1
            print('Vi tri [', i, '][', j, ']', sep='')
if ok == 0:
    print('NOT FOUND')

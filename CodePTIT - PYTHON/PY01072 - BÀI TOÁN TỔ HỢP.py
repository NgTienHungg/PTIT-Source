def Try(i, l):
    global n, k
    if len(l) == k:
        print(*l)
        return
    for j in range(i, n):
        Try(j + 1, l + [list[j]])


n, k = [int(i) for i in input().split()]
list = sorted(list({int(i) for i in input().split()}))
n = len(list)


Try(0, [])

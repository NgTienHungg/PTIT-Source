n, k = [int(x) for x in input().split()]
m = {}
a = input().split()
for i in a : m[i] = 1
a, d = [''], [0]
for i in sorted(list(m)) :
    d.append(len(a))
    a.append(i)
n = len(a) - 1
while True :
    ok = 0
    for i in range(k) :
        print(a[d[i + 1]], end = ' ')
    print()
    for i in range(k, 0, -1) :
        if d[i] != n - k + i :
            ok = 1
            d[i] += 1
            for j in range(i + 1, k + 1) : d[j] = d[j - 1] + 1
            break
    if ok == 0 : break
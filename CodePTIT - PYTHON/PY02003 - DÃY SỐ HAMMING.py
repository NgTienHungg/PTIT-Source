N = 10**18
list = []

i = 1
while i <= N:
    j = 1
    while j <= N:
        k = 1
        while k <= N:
            list += [i * j * k]
            k *= 5
        j *= 3
    i *= 2
list.sort()


def binSearch(l, r, x):
    if l > r:
        return 'Not in sequence'
    m = (l + r) // 2
    if list[m] == x:
        return m + 1
    if list[m] < x:
        return binSearch(m + 1, r, x)
    return binSearch(l, m - 1, x)


for t in range(int(input())):
    n = int(input())
    print(binSearch(0, len(list), n))

def isValid(a, b):
    while b != 0:
        x = a % b
        a = b
        b = x
    return a == 1


n, k = [int(i) for i in input().split()]
low, up = pow(10, k - 1), pow(10, k)
count = 0
for i in range(low, up):
    if isValid(n, i):
        print(i, end=' ')
        count += 1
        if count % 10 == 0:
            print()

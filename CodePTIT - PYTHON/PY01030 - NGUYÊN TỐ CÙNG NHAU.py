import math


n, k = [int(i) for i in input().split()]
low, up = 10**(k - 1), 10**k
count = 0
for i in range(low, up):
    if math.gcd(n, i) == 1:
        print(i, end=' ')
        count += 1
        if count % 10 == 0:
            print()

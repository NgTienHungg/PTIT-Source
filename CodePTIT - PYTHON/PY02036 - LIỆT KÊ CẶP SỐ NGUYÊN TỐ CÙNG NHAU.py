import math

n = int(input())
list = sorted([int(i) for i in input().split()])

for i in range(n):
    for j in range(i + 1, n):
        if math.gcd(list[i], list[j]) == 1:
            print(str(list[i]) , str(list[j]))

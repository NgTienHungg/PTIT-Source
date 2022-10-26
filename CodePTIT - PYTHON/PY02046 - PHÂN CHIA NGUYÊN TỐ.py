import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n >= 2


n = int(input())
a = [int(i) for i in input().split()]
b = {}
for i in a:
    b[i] = 1

a = list(b)
n = len(a)

for i in range(1, len(a)):
    a[i] += a[i - 1]
hasAns = False
for i in range(len(a)):
    if isPrime(a[i]) and isPrime(a[n - 1] - a[i]):
        hasAns = True
        print(i)
        break
if not hasAns:
    print("NOT FOUND")

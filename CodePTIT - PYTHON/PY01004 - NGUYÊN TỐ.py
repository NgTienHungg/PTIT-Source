import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1


for t in range(int(input())):
    n = int(input())
    k = 0
    for i in range(1, n):
        if math.gcd(n, i) == 1:
            k = k + 1
    if isPrime(k):
        print('YES')
    else:
        print('NO')

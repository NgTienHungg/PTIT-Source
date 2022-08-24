import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return 0
    return n > 1


for t in range(int(input())):
    S = sum(int(i) for i in input())
    print('YES' if isPrime(S) else 'NO')

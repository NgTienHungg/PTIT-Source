import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n >= 2


for t in range(int(input())):
    s = input()
    l, nt = len(s), 0
    for i in s:
        if isPrime(int(i)):
            nt += 1
    print('YES' if isPrime(l) and nt > l - nt else 'NO')

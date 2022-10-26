import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0:
            return False
    return n > 1


for t in range(int(input())):
    a, b = [int(i) for i in input().split()]
    if isPrime(sum(int(i) for i in str(math.gcd(a, b)))):
        print('YES')
    else:
        print('NO')

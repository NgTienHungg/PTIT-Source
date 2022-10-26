from imaplib import Int2AP
import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n >= 2


n = int(input())
a = [int(i) for i in input().split()]
m = {}
for i in a:
    if isPrime(i):
        if i in m:
            m[i] += 1
        else:
            m[i] = 1
for i in m:
    print(str(i) + " " + str(m[i]))

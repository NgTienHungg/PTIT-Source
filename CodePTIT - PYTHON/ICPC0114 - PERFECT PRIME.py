import math


def isprime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0:
            return False
    return True


def deff(str):
    for i in str:
        if not isprime(int(i)):
            return 'No'
    s = sum([int(i) for i in str])
    num1, num2 = str, str[::-1]
    if not isprime(s) or not isprime(int(num1)) or not isprime(int(num2)):
        return 'No'
    return 'Yes'


for case in range(int(input())):
    print(deff(input()))

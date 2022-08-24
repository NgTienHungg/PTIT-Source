import math

# chưa hiểu sao dùng hàm này lại WA
# def isPrime(n):
#     return n == 2 or n == 3 or n == 5 or n == 7


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return 0
    return n > 1


def check(s):
    for i in range(len(s)):
        if (isPrime(i) and not isPrime(int(s[i]))) or (not isPrime(i) and isPrime(int(s[i]))):
            return 'NO'
    return 'YES'


for t in range(int(input())):
    print(check(input()))

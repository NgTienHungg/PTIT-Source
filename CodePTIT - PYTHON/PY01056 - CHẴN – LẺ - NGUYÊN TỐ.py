import math


def check(s):
    for i in range(len(s)):
        if i % 2 != int(s[i]) % 2:
            return 'NO'

    n = sum(int(i) for i in s)
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return 'NO'
    return 'YES' if n > 1 else 'NO'


for t in range(int(input())):
    print(check(input()))

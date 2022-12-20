from math import sqrt

for t in range(int(input())):
    n = int(input())
    n *= 2
    res = 0
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            if(n/i - i + 1) % 2 == 0:
                res += 1
    print(res)
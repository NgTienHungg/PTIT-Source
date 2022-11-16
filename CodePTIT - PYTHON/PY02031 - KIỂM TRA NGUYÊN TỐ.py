import math


def prime(n):
    if n < 2:
        return 0
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return 0
    return 1


n, m = [int(i) for i in input().split()]
for i in range(n):
    list = [prime(int(i)) for i in input().split()]
    print(*list)

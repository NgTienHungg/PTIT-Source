from math import sqrt


def emirp(n):
    if n == 2 or n == 3:
        return True
    if n < 5 or n % 2 == 0 or n % 3 == 0:
        return False
    for i in range(5, int(sqrt(n)+1), 6):
        if n % i == 0 or n % (i+2) == 0:
            return False
    return True


for __ in range(int(input())):
    used = []
    n = int(input())
    for i in range(13, n):
        num = str(i)
        if int(num[::-1]) < n and num != num[::-1] and emirp(int(num)) and emirp(int(num[::-1])) and num not in used:
            print(i, num[::-1], end=' ')
            used += [num, num[::-1]]
    print()

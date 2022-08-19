import math

for t in range(int(input())):
    n = int(input())
    res = '1'
    for i in range(2, int(math.sqrt(n) + 1)):
        cnt = 0
        while n % i == 0:
            cnt += 1
            n /= i
        if cnt != 0:
            res += ' * ' + str(i) + '^' + str(cnt)
        if n == 1:
            break
    if n != 1:
        res += ' * ' + str(int(n)) + '^1'
    print(res)

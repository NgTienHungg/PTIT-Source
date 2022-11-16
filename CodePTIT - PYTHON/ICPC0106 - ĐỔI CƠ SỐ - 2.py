from math import log2

BASE = '0123456789ABCDEF'

for t in range(int(input())):
    base = int(log2(int(input())))
    num = input()
    while len(num) % base:
        num = '0' + num
    pow = [1]
    for i in range(1, base):
        pow = [pow[0]*2] + pow
    res = ''
    for i in range(0, len(num), base):
        e = 0
        for j in range(i, i+base):
            e += int(num[j])*pow[j-i]
        res += BASE[e]
    print(res)

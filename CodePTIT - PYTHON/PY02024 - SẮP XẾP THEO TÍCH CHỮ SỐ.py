def mul(s):
    x = 1
    for i in s:
        x *= int(i)
    return x


for t in range(int(input())):
    n = int(input())
    a = input().split()
    a.sort(key=lambda s: (mul(s), int(s)))
    print(*a)

for t in range(int(input())):
    n = int(input())
    a = input().split()
    a.sort(key=lambda s: (sum(int(i) for i in s), int(s)))
    print(*a)

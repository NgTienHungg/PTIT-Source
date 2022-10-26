for t in range(int(input())):
    N, p = [int(i) for i in input().split()]
    x = 0
    for i in range(2, N + 1):
        num = i
        while num % p == 0:
            num /= p
            x += 1
    print(x)

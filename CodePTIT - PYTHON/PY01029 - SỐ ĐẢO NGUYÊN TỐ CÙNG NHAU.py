def check(a, b):
    a, b = int(a), int(b)
    while b != 0:
        x = a % b
        a = b
        b = x
    if a == 1:
        return 'YES'
    else:
        return 'NO'


for t in range(int(input())):
    n = input()
    print(check(n, n[::-1]))

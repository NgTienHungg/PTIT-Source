def gcd(a, b):
    while b > 0:
        x = a % b
        a = b
        b = x
    return a

T = int(input())

for t in range(0, T):
    a = int(input())
    b = int(input())
    print(a * b // gcd(a, b))
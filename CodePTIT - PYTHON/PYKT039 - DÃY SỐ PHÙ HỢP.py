def check(a, b):
    for i in range(len(a)):
        if a[i] > b[i]:
            return 'NO'
    return 'YES'


for t in range(int(input())):
    n = int(input())
    a = sorted([int(i) for i in input().split()])
    b = sorted([int(i) for i in input().split()])
    print(check(a, b))

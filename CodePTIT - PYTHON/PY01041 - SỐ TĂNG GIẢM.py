def solve(s):
    if len(s) < 3:
        return 'NO'
    ar = list(int(i) for i in s)
    up = True
    for i in range(1, len(ar)):
        if up and ar[i] <= ar[i - 1]:
            up = False
        elif not up and ar[i] >= ar[i - 1]:
            return 'NO'
    return 'YES'


for t in range(int(input())):
    s = input()
    print(solve(s))

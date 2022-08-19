def check(s):
    for i in range(len(s) - 1):
        if s[i] > s[i + 1]:
            return 'NO'
    return 'YES'


for t in range(int(input())):
    s = input()
    print(check(s))

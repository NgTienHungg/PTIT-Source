def check(s):
    if sum(int(i) for i in s) % 10 != 0:
        return 'NO'
    for i in range(len(s) - 1):
        if abs(ord(s[i]) - ord(s[i + 1])) != 2:
            return 'NO'
    return 'YES'


for t in range(int(input())):
    s = input()
    print(check(s))

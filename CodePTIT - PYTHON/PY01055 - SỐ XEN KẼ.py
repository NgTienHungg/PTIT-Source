def check(s):
    if len(s) % 2 == 0 or s[0] == s[1]:
        return 'NO'
    for i in range(2, len(s), 2):
        if s[i] != s[0]:
            return 'NO'
    return 'YES'


for t in range(int(input())):
    print(check(input()))

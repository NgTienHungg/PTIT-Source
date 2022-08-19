def check(s):
    l = len(s)
    if s[l - 2] == '8' and s[l - 1] == '6':
        return 'YES'
    else:
        return 'NO'


for t in range(int(input())):
    s = input()
    print(check(s))

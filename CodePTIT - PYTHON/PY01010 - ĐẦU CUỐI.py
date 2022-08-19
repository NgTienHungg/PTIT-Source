for t in range(int(input())):
    s = input()
    l = len(s)
    if s[0] == s[l - 2] and s[1] == s[l - 1]:
        print('YES')
    else:
        print('NO')
for t in range(int(input())):
    s = input()
    res = ''
    for i in range(0, len(s), 2):
        res += s[i] * int(s[i + 1])
    print(res)

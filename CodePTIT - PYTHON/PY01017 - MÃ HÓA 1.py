for t in range(int(input())):
    s = input() + '!'
    cnt, ch = 0, s[0]
    for i in s:
        if i == ch:
            cnt += 1
        else:
            print(str(cnt) + ch, end='')
            cnt, ch = 1, i
    print()

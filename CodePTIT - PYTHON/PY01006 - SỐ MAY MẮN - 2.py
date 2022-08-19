def checkLuckyNum(s):
    for i in range(len(s)):
        if s[i] != '4' and s[i] != '7':
            return 'NO'
    return 'YES'


for t in range(int(input())):
    s = input()
    print(checkLuckyNum(s))

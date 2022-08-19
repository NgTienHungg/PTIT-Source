s = input()
cnt = 0
for i in range(len(s)):
    if s[i] == '4' or s[i] == '7':
        cnt = cnt + 1
        
if cnt == 4 or cnt == 7:
    print('YES')
else:
    print('NO')

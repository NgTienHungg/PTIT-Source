def check(s):
    for i in s:
        if s < '0' or i > '2':
            return 'NO'
    return 'YES'


for t in range(int(input())):
    print(check(input()))

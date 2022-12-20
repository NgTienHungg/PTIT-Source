import re

s = ''
regex = '\\.\\!\\?'
while True:
    try:
        s += input()
    except EOFError:
        break

s = re.split(regex, s)
# print(s)

for i in s:
    x = i.lower().split()
    x[0] = x[0].title()
    print(*x)

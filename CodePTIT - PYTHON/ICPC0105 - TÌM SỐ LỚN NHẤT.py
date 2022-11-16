import re

for t in range(int(input())):
    print(max(int(i) for i in re.findall(r'\d+', input())))

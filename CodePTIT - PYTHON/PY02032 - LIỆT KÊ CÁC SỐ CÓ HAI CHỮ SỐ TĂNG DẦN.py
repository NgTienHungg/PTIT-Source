s = input()
m = {}

for i in range(0, len(s), 2):
    x = int(s[i:i+2])
    if x >= 10: m[x] = 1

print(*sorted(m))

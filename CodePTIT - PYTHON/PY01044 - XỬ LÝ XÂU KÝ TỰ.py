a = [i.lower() for i in input().split()]
b = [i.lower() for i in input().split()]
m1, m2, m3 = {}, {}, {}

for i in a:
    m1[i] = 1
    m2[i] = 1
for i in b:
    m1[i] = 1
    m3[i] = 1
    
for i in sorted(m1):
    print(i, end=' ')
print()

for i in sorted(m2):
    if i in m3:
        print(i, end=' ')
from itertools import count


n = int(input())
a = [float(i) for i in input().split()]
ma, mi = max(a), min(a)
lst = []
for i in a:
    if i != ma and i != mi:
        lst.append(i)
print("{:.2f}".format(sum(lst) / len(lst)))

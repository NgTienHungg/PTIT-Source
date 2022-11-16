n = int(input())
list = [int(i) for i in input().split()]

for i in range(1, n + 2):
    if i not in list:
        print(i)
        break
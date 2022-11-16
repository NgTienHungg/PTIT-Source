kr = [1]*10
for i in range(2, 10):
    kr[i] = kr[i-1]*i

for case in range(int(input())):
    num = input()
    s = sum(kr[int(i)] for i in num)
    print('Yes' if s == int(num) else 'No')

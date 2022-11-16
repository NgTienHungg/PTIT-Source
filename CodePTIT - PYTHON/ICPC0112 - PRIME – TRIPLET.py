MAX = int(1e6+1)

prime = [1]*int(MAX)
prime[0] = prime[1] = 0
for i in range(1000):
    if prime[i]:
        for j in range(i*i, MAX, i):
            prime[j] = 0

for case in range(int(input())):
    cnt = 0
    for i in range(int(input())-5):
        if prime[i] and prime[i+6]:
            if prime[i+2] or prime[i+4]:
                cnt += 1
    print(cnt)

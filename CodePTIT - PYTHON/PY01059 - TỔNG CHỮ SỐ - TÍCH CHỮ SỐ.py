for t in range(int(input())):
    a = list(int(i) for i in input())
    su, mu = 0, 0
    for i in range(len(a)):
        if i % 2 == 0:
            su += a[i]
        else:
            if a[i] != 0:
                if mu == 0:
                    mu = a[i]
                else:
                    mu *= a[i]
    print(str(su) + " " + str(mu))

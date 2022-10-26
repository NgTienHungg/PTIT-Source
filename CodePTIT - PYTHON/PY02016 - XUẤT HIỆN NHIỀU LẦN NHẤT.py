for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    if len(a) == 1:
        print(a[0])
    else:
        m, ans, cnt = {}, a[0], 1
        for i in a:
            if i in m:
                m[i] += 1
                if m[i] > cnt:
                    ans, cnt = i, m[i]
            else:
                m[i] = 1
        if cnt * 2 > len(a):
            print(ans)
        else:
            print("NO")

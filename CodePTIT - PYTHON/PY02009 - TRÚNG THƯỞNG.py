for t in range(int(input())):
    n = int(input())
    m, cnt = {}, 0
    for i in range(n):
        x = int(input())
        if x in m:
            m[x] += 1
        else:
            m[x] = 1
        cnt = max(cnt, m[x])
    ans = 1000
    for i in m:
        if m[i] == cnt:
            ans = min(ans, i)
    print(ans)
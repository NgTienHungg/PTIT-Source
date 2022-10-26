S = input()
N = len(S)
a = [0] * N


def Try(s, k):
    if k == N:
        print(s)
        return
    for i in range(N):
        if a[i] == 0:
            a[i] = 1
            Try(s + S[i], k + 1)
            a[i] = 0

Try("", 0)
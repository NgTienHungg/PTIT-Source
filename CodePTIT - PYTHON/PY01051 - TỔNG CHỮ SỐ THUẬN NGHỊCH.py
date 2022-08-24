for t in range(int(input())):
    S = str(sum(int(i) for i in input()))
    print('YES' if len(S) > 1 and S == S[::-1] else 'NO')

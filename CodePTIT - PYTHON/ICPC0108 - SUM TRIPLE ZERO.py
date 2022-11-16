for t in range(int(input())):
    n = int(input())
    l = sorted([int(i) for i in input().split()])
    res = 0
    for i in range(n-2):
        left, right = i+1, n-1
        while left < right:
            tmp = l[i] + l[left] + l[right]
            if not tmp:
                res += 1
                left += 1
            elif tmp < 0:
                left += 1
            else:
                right -= 1
    print(res)

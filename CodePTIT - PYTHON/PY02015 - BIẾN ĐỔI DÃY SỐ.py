while True:
    list = [int(i) for i in input().split()]
    if list.count(0) == 4:
        break
    cnt = 0
    while list.count(list[0]) != 4:
        tmp = list.copy()
        for i in range(4):
            list[i] = abs(tmp[i] - tmp[(i + 1) % 4])
        cnt += 1
    print(cnt)

for case in range(int(input())):
    n, index = [int(i) for i in input().split()]
    list = input().split()
    print(*(list[index:] + list[:index]))

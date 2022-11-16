for t in range(int(input())):
    n, m = input().split()
    ip = input().split()
    if len(ip) == 1:
        str1 = ip[0]
        str2 = input()
    else:
        str1, str2 = ip
    num1 = int(str1.replace(n, m)) + int(str2.replace(n, m))
    num2 = int(str1.replace(m, n)) + int(str2.replace(m, n))
    print(min(num1, num2), max(num1, num2))

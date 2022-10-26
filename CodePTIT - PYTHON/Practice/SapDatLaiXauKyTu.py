for t in range(int(input())):
    a = sorted(input())
    b = sorted(input())
    print('Test ' + str(t + 1) + ': ' + ('YES' if a == b else 'NO'))

import queue


def isBeautifulNum(n):
    s = str(n)
    l = len(s)
    if l % 2 == 1:
        return False
    for i in range(int(l / 2)):
        if s[i] != s[l - i - 1] or (ord(s[i]) - ord('0')) % 2 == 1:
            # ord(char): giá trị unicode của char
            return False
    return True


for t in range(int(input())):
    n = int(input())
    q = queue()
    
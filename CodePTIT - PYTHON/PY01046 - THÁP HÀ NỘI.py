def Try(n, a, b, c):
    if n == 1:
        print(a, "->", b)
        return
    Try(n - 1, a, c, b)
    print(a, "->", b)
    Try(n - 1, c, b, a)


n = int(input())
Try(n, 'A', 'C', 'B')

# Cre: Lazygarde
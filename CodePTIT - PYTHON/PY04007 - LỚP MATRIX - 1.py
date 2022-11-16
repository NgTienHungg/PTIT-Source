class Matrix:

    def __init__(self, n, m, mt):
        self.n = n
        self.m = m
        self.mt = mt

    def __mul__(self):
        res = []
        for i in range(self.n):
            res += [[0] * self.n]
            for j in range(self.n):
                for k in range(self.m):
                    res[i][j] += self.mt[i][k] * self.mt[j][k]
        return Matrix(self.n, self.m, res)

    def __str__(self):
        for i in self.mt:
            print(*i)
        return ''


for t in range(int(input())):
    n, m = [int(i) for i in input().split()]
    mt = []
    for i in range(n):
        mt.append([int(j) for j in input().split()])
    matrix = Matrix(n, m, mt)
    print(matrix.__mul__())

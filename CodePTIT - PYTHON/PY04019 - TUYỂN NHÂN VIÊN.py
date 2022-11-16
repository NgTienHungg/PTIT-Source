class Staff:
    def __init__(self, id, name, score):
        self.id = id
        self.name = name
        self.score = score

    def getStatus(self):
        if self.score > 9.5:
            return 'XUAT SAC'
        if self.score >= 8:
            return 'DAT'
        if self.score >= 5:
            return 'CAN NHAC'
        return 'TRUOT'

    def __str__(self):
        return '{} {} {:.2f} {}'.format(self.id, self.name, self.score, self.getStatus())


list = []
for i in range(int(input())):
    id = 'TS0{}'.format(i + 1)
    name = input()
    lt, th = float(input()), float(input())
    lt /= 10 if lt > 10 else 1
    th /= 10 if th > 10 else 1
    list.append(Staff(id, name, (lt + th) / 2))


list.sort(key=lambda staff: -staff.score)
print(*list, sep='\n')

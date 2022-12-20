class Bill:
    def __init__(self, id, name, lastNum, currentNum):
        self.id = 'KH{:02d}'.format(id)
        self.name = name
        self.lastNum = lastNum
        self.currentNum = currentNum
        self.calculate()

    def calculate(self):
        cnt = self.currentNum - self.lastNum

        if cnt <= 50:
            self.total = cnt * 100
            self.total *= 1.02
        elif cnt <= 100:
            self.total = 50 * 100 + (cnt-50) * 150
            self.total *= 1.03
        else:
            self.total = 50 * 100 + 50 * 150 + (cnt - 100) * 200
            self.total *= 1.05

        self.total = round(self.total)

    def __str__(self):
        return '{} {} {}'.format(self.id, self.name, self.total)


list = []
for i in range(int(input())):
    name = input()
    last = int(input())
    current = int(input())
    list.append(Bill(i + 1, name, last, current))

list.sort(key=lambda e: (-e.total))
print(*list, sep='\n')

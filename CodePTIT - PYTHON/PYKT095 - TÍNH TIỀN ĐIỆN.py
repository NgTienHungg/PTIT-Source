class Bill:
    def __init__(self, id, name, type, start, end):
        self.id = id
        self.name = name
        self.type = type
        self.start = start
        self.end = end

        self.setLimit()
        self.calculate()

    def setLimit(self):
        if type == 'A':
            self.limit = 100
        elif type == 'B':
            self.limit = 500
        elif type == 'C':
            self.limit = 200

    def calculate(self):
        if self.end - self.start < self.limit:
            self.inLimit = (self.end - self.start) * 450
            self.overLimit = 0
            self.vat = 0
        else:
            self.inLimit = self.limit * 450
            self.overLimit = (self.end - self.start - self.limit) * 1000
            self.vat = self.overLimit // 20
        self.total = self.inLimit + self.overLimit + self.vat

    def __str__(self):
        return '{} {} {} {} {} {}'.format(self.id, self.name, self.inLimit, self.overLimit, self.vat, self.total)


list = []
for i in range(int(input())):
    id = 'KH0{}'.format(i + 1)
    name = ' '.join(input().split()).title()
    arr = input().split()
    type = str(arr[0])
    start, end = int(arr[1]), int(arr[2])
    list.append(Bill(id, name, type, start, end))

list.sort(key=lambda e: -e.total)
print(*list, sep='\n')

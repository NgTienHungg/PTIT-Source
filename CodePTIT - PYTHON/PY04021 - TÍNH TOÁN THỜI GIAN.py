class Gamer:
    def __init__(self, id, name, timeIn, timeOut):
        self.id = id
        self.name = name
        self.timeIn = timeIn
        self.timeOut = timeOut
        self.calculateTime()

    def calculateTime(self):
        i = int(self.timeIn[0:2]) * 60 + int(self.timeIn[3:])
        o = int(self.timeOut[0:2]) * 60 + int(self.timeOut[3:])
        self.time = o - i

    def timeStr(self):
        return '{} gio {} phut'.format(self.time // 60, self.time % 60)

    def __str__(self):
        return '{} {} {}'.format(self.id, self.name, self.timeStr())


list = []
for i in range(int(input())):
    list.append(Gamer(input(), input(), input(), input()))

list.sort(key=lambda e: (-e.time))
print(*list, sep='\n')

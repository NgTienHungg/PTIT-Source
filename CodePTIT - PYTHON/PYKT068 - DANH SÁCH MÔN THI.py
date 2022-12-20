class Subject:
    def __init__(self, id, name, exam):
        self.id = id
        self.name = name
        self.exam = exam

    def __str__(self):
        return '{} {} {}'.format(self.id, self.name, self.exam)


list = []
for i in range(int(input())):
    list.append(Subject(input(), input(), input()))

list.sort(key=lambda e: e.id)
print(*list, sep='\n')

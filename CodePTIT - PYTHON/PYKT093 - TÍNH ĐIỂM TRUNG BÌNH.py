class Student:
    def __init__(self, id, name, score1, score2, score3):
        self.id = self.setId(id)
        self.name = self.setName(name)
        self.score = self.setScore(float(score1), float(score2), float(score3))
        self.rank = None

    def setId(self, id):
        return 'SV{0:0>2}'.format(id)

    def setName(self, name):
        name = name.lower().split()
        for i in range(len(name)):
            name[i] = name[i][0].upper() + name[i][1:]
        return ' '.join(name)

    def setScore(self, score1, score2, score3):
        return '{:.2f}'.format((score1*3 + score2*3 + score3*2)/8+0.001)

    def __str__(self):
        return '{} {} {} {}'.format(self.id, self.name, self.score, self.rank)


n = int(input())
students = [Student(i+1, input(), input(), input(), input()) for i in range(n)]
students.sort(key=lambda ele: (-float(ele.score), ele.id))

students[0].rank = 1
for i in range(1, n):
    if students[i].score == students[i-1].score:
        students[i].rank = students[i-1].rank
    else:
        students[i].rank = i+1

print(*students, sep='\n')
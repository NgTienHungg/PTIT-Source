class Student:

    def __init__(self, name, dob, marks):
        self.name = name
        self.dob = dob
        self.score = sum(marks)

    def __str__(self):
        return f'{self.name} {self.dob} {self.score}'


name = input()
dob = input()
marks = [float(input()), float(input()), float(input())]
print(Student(name, dob, marks))

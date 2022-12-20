class Category:
    def __init__(self, id, name):
        self.id = id
        self.name = name


class Film:
    def __init__(self, id, category, date, name, count):
        self.id = id
        self.category = category
        self.date = date
        self.day = int(date[0:2])
        self.month = int(date[3:5])
        self.year = int(date[6:])
        self.name = name
        self.count = count

    def __str__(self):
        return '{} {} {} {} {}'.format(self.id, self.category.name, self.date, self.name, self.count)


n, m = [int(i) for i in input().split()]
cates = []
films = []

for i in range(n):
    cates.append(Category('TL{:03}'.format(i + 1), input()))

for i in range(m):
    tl = input()
    for category in cates:
        if tl == category.id:
            films.append(Film('P{:03}'.format(i + 1),
                         category, input(), input(), int(input())))

films.sort(key=lambda e: (e.year, e.month, e.day, e.name, -e.count))
print(*films, sep='\n')

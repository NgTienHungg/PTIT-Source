from math import gcd


class PhanSo:

    def __init__(self, tu=None, mau=None):
        self.tu = tu
        self.mau = mau

    def __add__(self, other):
        c = PhanSo()
        c.mau = self.mau * other.mau
        c.tu = self.tu * other.mau + self.mau * other.tu
        c.rut_gon()
        return c

    def __str__(self):
        return f'{self.tu}/{self.mau}'

    def rut_gon(self):
        g = gcd(self.tu, self.mau)
        self.tu //= g
        self.mau //= g


list = [int(i) for i in input().split()]
a = PhanSo(list[0], list[1])
b = PhanSo(list[2], list[3])
c = a + b
print(c)

// https://code.ptit.edu.vn/student/question/CPP0531
// BỐN ĐIỂM TRÊN MẶT PHẲNG

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y, z;

    void input() {
        cin >> x >> y >> z;
    }
};

Point Vector(Point A, Point B) {
    Point AB;
    AB.x = B.x - A.x;
    AB.y = B.y - A.y;
    AB.z = B.z - A.z;
    return AB;
}

void TestCase()
{
    Point A, B, C, D;
    A.input(); B.input(); C.input(); D.input();

    Point AB = Vector(A, B);
    Point AC = Vector(A, C);
    Point AD = Vector(A, D);

    Point ABAC;
    ABAC.x = AB.y * AC.z - AB.z * AC.y;
    ABAC.y = AB.z * AC.x - AB.x * AC.z;
    ABAC.z = AB.x * AC.y - AB.y * AC.x;

    int s = ABAC.x * AD.x + ABAC.y * AD.y + ABAC.z * AD.z;
    s == 0 ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
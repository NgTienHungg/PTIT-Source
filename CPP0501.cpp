// https://code.ptit.edu.vn/student/question/CPP0501
// CẤU TRÚC ĐIỂM

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Point
{
    double x, y;
};

void input(Point &A)
{
    cin >> A.x >> A.y;
}

double distance(Point A, Point B)
{
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main()
{
    Point A, B;
    int T;
    cin >> T;
    while (T--) {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}
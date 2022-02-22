// https://code.ptit.edu.vn/student/question/CPP0526
// TRẺ NHẤT – GIÀ NHẤT

#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string name, date;
    int d, m, y;

    void input() {
        cin >> name >> date;
        d = stoi(date.substr(0, 2));
        m = stoi(date.substr(3, 2));
        y = stoi(date.substr(6));
    }
};

bool cmp(Person a, Person b)
{
    if (a.y > b.y) return 1;
    if (a.y == b.y) {
        if (a.m > b.m) return 1;
        if (a.m == b.m) {
            if (a.d > b.d) return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    Person a[n];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }

    sort(a, a + n, cmp);
    cout << a[0].name << endl << a[n - 1].name;
}
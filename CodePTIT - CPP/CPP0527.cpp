// https://code.ptit.edu.vn/student/question/CPP0527
// SẮP XẾP THỜI GIAN

#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int h, m, s;

    void input() {
        cin >> h >> m >> s;
    } 
    
    void output() {
        cout << h << " " << m << " " << s << endl;
    }
};

bool cmp(Time a, Time b) 
{
    if (a.h < b.h) return 1;
    if (a.h == b.h) {
        if (a.m < b.m) return 1;
        if (a.m == b.m) {
            if (a.s < b.s) return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        a[i].output();
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0125
// LIỆT KÊ SỐ NGUYÊN TỐ - 1

#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e6 + 1, 1);
void eratosthenes() {
    v[0] = v[1] = 0;
    for (int i = 2; i <= 1e3; ++i) {
        if (v[i]) {
            for (int j = i * i; j <= 1e6; j += i)
                v[j] = 0;
        }
    }
}

int main() {
    eratosthenes();
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = a + 1; i < b; ++i) {
        if (v[i]) cout << i << " ";
    }
    return 0;
}

// Khoảng (a, b)
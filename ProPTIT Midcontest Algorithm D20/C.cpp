// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/C
// C. Tái tạo tinh thể

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v(1e6 + 1, 1);   // Số ước của i, số nguyên tố là số chỉ có 2 ước
vector<int> res(1e6 + 1, 0); // Số các số từ 1 đến i t/m đề bài (Đã cộng dồn)

void eratosthenes()
{
    for (int i = 2; i <= 1e6; ++i) {
        for (int j = i; j <= 1e6; j += i) {
            v[j]++;
        }
    }
    for (int i = 2; i <= 1e6; ++i) {
        res[i] = res[i - 1];
        if (v[v[i]] == 2)
            res[i] += 1;
    }
}

void TestCase()
{
    int a, b;
    cin >> a >> b;
    cout << res[b] - res[a - 1] << endl;
}

int main()
{
    eratosthenes();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}

// Đếm trong 1 đoạn số lượng số có số ước là 1 số nguyên tố
/*
C. [ProPTIT-Algorithm-Divide and Conquer] Ký tự thứ i

Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất: G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1).
Với phép cộng (+) là phép nối hai xâu với nhau. Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.

Input
Dòng 1 ghi số bộ test.
Mỗi bộ test ghi trên một dòng 2 số nguyên N và i (1<N<93).
Số i đảm bảo trong phạm vi của xâu G(N) và không quá 18 chữ số

Output
Ghi ra màn hình kết quả tương ứng với từng bộ test.

Example

input
2
6 4
8 9

output
A
A
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll l[100];

void init()
{
    l[1] = l[2] = 1;
    for (int i = 3; i < 93; i++)
        l[i] = l[i - 2] + l[i - 1];
}

void solve()
{
    ll n, i;
    cin >> n >> i;
    while (n > 2)
    {
        if (i <= l[n - 2])
            n -= 2;
        else
        {
            i -= l[n - 2];
            n -= 1;
        }
    }
    if (n == 1)
        cout << "A";
    else
        cout << "B";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    init();
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
// https://www.spoj.com/PTIT/problems/BCPTICH/
// BCPTICH - Phân tích số nguyên

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t, n;
    cin >> t >> n;
    int l = 2 * n;
    int count = 0;
    for (int i = 2; i <= sqrt(l); i++)
        if (l % i == 0)
        {
            int x = i, y = l / x;
            if ((x + y) % 2 == 1)
                count++;
        }
    cout << t << " " << count << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

// Ta có tổng dãy số liên tiếp của: 1, 2, 3, ... n có dạng = (1+n)(n-1+1)/2. Tổng quát hơn nó là: = (r+l)(r-l+1)/2; với: l, l+1, ... r;
// Ta thấy rằng N = (r+l)(r-l+1)/2 <=> N*2 = (r+l)(r-l+1);
// Coi
// r+l = x;
// r-l+1 = y;
// => 2*N = x*y => x, y là ước của 2*n (x, y nguyên).
// -> Liệt kê các ước của 2*N;
// Với mỗi ước thu được là x -> y=N/x; -> Giải hệ tìm được r, l; -> kiểm tra r, l xem có thỏa mãn không rồi đếm.
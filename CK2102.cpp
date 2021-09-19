// https://code.itptit.com/problems/100032
// Người trong cuộc mới hiểu người trong kẹt

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long a, b, n;
    cin >> a >> b >> n;
    n = n - abs(a) - abs(b) + 1; // Vị trí ngay cạnh đích

    if (n > 0 && (n % 4 == 1 || n % 4 == 3))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}

// Nếu chia 4 dư 1, thì đi thẳng tới đích
// Nếu chia 4 dư 3, đi vòng nửa hình vuông tới đích
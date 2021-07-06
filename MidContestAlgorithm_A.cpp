/*
A. Tập số nguyên kề cận

Bạn có một mảng a gồm n số nguyên.
Bạn cần thực hiện q truy vấn: truy vấn thứ i gồm hai số nguyên xi và ki, nhiệm vụ của bạn là tìm ki phần tử a có khoảng cách gần nhất với số nguyên xi.
Hai số nguyên p và q có khoảng cách |p−q|.

Input
Dòng đầu tiên gồm 2 số nguyên n, q (1≤n,q≤1e5).
Dòng thứ hai gồm n số nguyên a1,a2,…,an (1≤ai≤1e9).
q dòng tiếp theo, dòng thứ i gồm 2 số nguyên xi, ki (1≤x≤1e9, 1≤k≤min(n,10))

Output
Với truy vấn thứ i, in ra ki số nguyên trên 1 dòng, đại diện cho ki phần tử của mảng a có khoảng cách với xi là nhỏ nhất. Các số này có thể in ra với bất kỳ thứ tự nào.
Nếu có nhiều tập hợp thỏa mãn, in ra bất cứ tập hợp nào cũng đều được tính điểm.

Example

input
4 1
1 2 3 4
3 2

output
3 2

Note
Trong test đề bài, có 2 tập số thỏa mãn là (2,3) hoặc (3,4).
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, q;
int x, k;
int a[100005];

int binarySearch(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        if (l == r)
            return l;
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] > x)
            r = m;
        else
            l = m + 1;
    }
}

void TestCase()
{
    cin >> x >> k;
    int pos = binarySearch(a, 0, n - 1, x);
    int i = pos - 1, j = pos;
    while (k--)
    {
        if (i < 0)
            cout << a[j++] << " ";
        else if (j == n)
            cout << a[i--] << " ";
        else if (abs(a[i] - x) <= abs(a[j] - x))
            cout << a[i--] << " ";
        else
            cout << a[j++] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);

    while (q--)
        TestCase();
    return 0;
}
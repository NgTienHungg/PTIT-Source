/*
I. Xếp hàng trao giải

Trong một cuộc thi, có n thí sinh tham gia.
Sau khi vượt qua những vòng thi cam go, gay cấn, ban tổ chức đã có trong tay điểm của tất cả các thí sinh, thí sinh thứ i có số điểm là ai.
Ban tổ chức muốn biết thứ hạng của các thí sinh để có thể trao giải.
Các bạn hãy giúp họ nhé

Input
Dòng đầu tiên là số n thí sinh (0≤n≤1e5)
Dòng thứ hai là n số tương ứng với số điểm của các thí sinh (0≤ai≤1e6,ai≠aj, ∀i≠j)

Output
In ra số thứ tự theo điểm của thí sinh

Examples

input
3
29 4 20

output
2 0 1 


input
5
5 4 3 2 1

output
4 3 2 1 0 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[100005], b[100005];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; ++i)
    {
        int pos = binarySearch(b, 0, n - 1, a[i]);
        cout << pos << " ";
    }
    return 0;
}
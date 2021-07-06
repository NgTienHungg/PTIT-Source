/*
G. Slope

Cho 1 dãy số có n phần tử, độ dốc của phần tử thứ i là i_cost được tính như sau:
+ L là phần tử xa nhất phía bên trái i sao cho giá trị từ i đến L giảm dần.
+ R là phần tử xa nhất phía bên phải i sao cho giá trị từ i đến R giảm dần.
+ i_cost là số phần tử từ L đến R.
Nhiệm vụ của bạn là tính i_cost của cả n phần tử.

Input
Dòng đầu tiên gồm 1 số nguyên N (1≤N≤2⋅1e5) là số ngày.
Dòng tiếp theo gồm N số nguyên A1, A2, …, AN (1≤Ai≤1e6).

Output
In ra N số là kết quả của bài toán.

Example

input
7
1 2 3 4 3 2 1

output
1 2 3 7 3 2 1 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[200005];
int b[200005]; // Tăng dần từ trái qua phải
int c[200005]; // Tăng dần từ phải qua trái

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    a[0] = a[n + 1] = 0;
    b[0] = 0;
    c[n + 1] = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > a[i - 1])
            b[i] = b[i - 1] + 1;
        else
            b[i] = 1;
    }
    for (int i = n; i >= 1; --i)
    {
        if (a[i] > a[i + 1])
            c[i] = c[i + 1] + 1;
        else
            c[i] = 1;
    }
    for (int i = 1; i <= n; ++i)
        cout << b[i] + c[i] - 1 << " ";
    return 0;
}
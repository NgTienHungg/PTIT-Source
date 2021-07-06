/*
K. Sorting

Cho mảng A[] gồm n phần tử. Hãy tìm dãy con liên tục của mảng A[L], .., A[R] sao cho khi sắp xếp lại dãy con ta nhận được một mảng được sắp xếp.
Ví dụ với A[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60} ta chỉ cần sắp xếp lại dãy con từ A[4],.., A[9]: {30, 25, 40, 32, 31, 35} để có mảng được sắp.

Input
Dòng đầu tiên đưa vào n là số phần tử của mảng A[].
Dòng tiếp theo là n số A[i] của mảng A[] các số được viết cách nhau một vài khoảng trống.
1≤n≤1e6 ; 0≤A[i]≤1e7

Output
Đưa ra kết quả là 2 số L và R.

Example

input
11
10 12 20 30 25 40 32 31 35 50 60

output
4 9
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int i = 0, j = n - 1;
    while (a[i] == b[i] && i < j)
        i++;
    while (a[j] == b[j] && j > i)
        j--;
    cout << i + 1 << " " << j + 1;
    return 0;
}
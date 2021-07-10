/*
G. [ProPTIT-Algorithm-Divide and Conquer] Tích đa thức

Cho hai đa thức P và Q được biểu diễn như một mảng bao gồm các hệ số của đa thức.
Ví dụ với P(x)=5+0x1+10x2+6x3 được biểu diễn như mảng P[] ={5, 0, 10, 6}.
Hãy đưa ra đa thức R=P×Q theo các hệ số của R với cách biểu diễn như trên.

Input
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng:
- Dòng thứ nhất đưa vào hai số M, N tương ứng với lũy thừa lớn nhất của đa thức P và Q
- Dòng tiếp theo đưa vào M số là hệ số của đa thức P
- Dòng cuối cùng đưa vào M số là hệ số của đa thức Q.
T, M, N, P[i], Q[i] thỏa mãn ràng buộc: 1≤T≤100;1≤M,N≤100;1≤P[i],Q[i]≤100.

Output
Đưa ra kết quả mỗi test theo từng dòng.

Example

input
2
4 3
1 0 3 2
2 0 4
5 4
1 9 3 4 7
4 0 2 5

output
2 0 10 4 12 8 
4 36 14 39 79 23 34 35 
*/

#include <bits/stdc++.h>
using namespace std;

int m, n, maxx;
vector<int> a, b;

void init()
{
    cin >> m >> n;
    maxx = m + n - 1; // Số mũ cao nhất

    a.resize(m);
    b.resize(n);

    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
}

void solve()
{
    vector<vector<int>> res; // Lưu các kết quả phép nhân
    for (int i = 0; i < m; i++)
    {
        vector<int> v;

        // Thêm các số 0 theo quy tắc nhân
        for (int j = 1; j <= i; j++)
            v.push_back(0);

        for (int j = 0; j < n; j++)
            v.push_back(a[i] * b[j]);

        // Cân bằng số lượng phần tử mỗi phép nhân
        while (v.size() < maxx)
            v.push_back(0);

        res.push_back(v);
    }
    for (int i = 0; i < maxx; i++)
    {
        int s = 0; // Tính kết quả từng cột
        for (int j = 0; j < m; j++)
            s += res[j][i];
        cout << s << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        init();
        solve();
    }
    return 0;
}
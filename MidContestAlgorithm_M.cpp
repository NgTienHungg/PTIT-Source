/*
M. Smooth Number

Trong tiết toán của John và Will, thầy giáo đã giới thiệu một loại số gọi là Smooth Number.
Smooth Number là các số có các chữ số liên tiếp nhau và tăng dần, ví dụ 123 là Smooth Number nhưng 124 không phải vì các chữ số không liên tiếp nhau.
Trong lúc rảnh rỗi thì John và Will đố nhau xem có bao nhiêu số Smooth Number trong một đoạn [low;high] cho trước.
Will thì học giỏi hơn nên đã giải xong sớm. Các bạn hãy giúp John giải quyết bài toán này nhé.

Input
Dòng duy nhất gôm 2 sô nguyên low,high(10≤low≤hight≤1e9)

Output
Dòng đầu tiên in ra số lượng các số trong đoạn [low,high].
Dòng thứ hai in ra các số Smooth Number theo thứ tự giá trị tăng dần. Định dạng như OUTPUT mẫu

Example

input
100 300

output
2
[[123], [234]]
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> f;
void smoothNumber()
{
    for (int i = 2; i <= 9; ++i)
    {
        for (int j = 1; j <= 10 - i; ++j)
        {
            string s = "";
            for (int k = 1; k <= i; ++k)
            {
                s = s + char((j + k - 1) + '0');
            }
            f.push_back(stoi(s));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    smoothNumber();
    int l, h;
    cin >> l >> h;
    vector<int> res;
    for (int i = 0; i < f.size(); ++i)
    {
        if (f[i] < l)
            continue;
        if (f[i] > h)
            break;
        res.push_back(f[i]);
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i)
    {
        if (i == 0)
            cout << "[";
        cout << "[" << res[i] << "]";
        if (i != res.size() - 1)
            cout << ", ";
        else
            cout << "]";
    }
    return 0;
}
/*
K. [ProPTIT-Algorithm-Sinh kế tiếp] Mã số

Số lượng máy tính ở các phòng thực hành nhà A3 tăng lên nhanh chóng.
Để gán mã cho các máy tính của PTIT người ta sử dụng mã gồm 2*N ký tự, trong đó:
- N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A.
- N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau).
Người ta ước tính chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành.
Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

Input
Chỉ có duy nhất số N (1 < N < 6)

Output
Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

Example

input
2

output
AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
vector<string> v; // Chuỗi số bên phải
string s;         // Chuỗi kí tự bên trái
char c;
bool stop;

void init()
{
    cin >> n;
    c = n + '0';
    for (int i = 0; i < n; i++)
        s.push_back(char(i + 'A'));
    stop = 0;
}

void sinhNum()
{
    string tmp(n, '1');
    v.push_back(tmp);
    while (1)
    {
        int i = n - 1;
        while (i >= 0 && tmp[i] == c)
            i--;
        if (i < 0)
            break;
        tmp[i] += 1;
        for (int j = i + 1; j < n; j++)
            tmp[j] = '1';
        v.push_back(tmp);
    }
}

void sinhHv()
{
    int i = n - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        i--;
    if (i < 0)
        stop = 1;
    else
    {
        for (int j = n - 1; j > i; j--)
            if (s[j] > s[i])
            {
                swap(s[i], s[j]);
                break;
            }
        sort(s.begin() + i + 1, s.end());
    }
}

void print()
{
    for (int i = 0; i < v.size(); i++)
        cout << s << v[i] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    sinhNum();
    while (!stop)
    {
        print();
        sinhHv();
    }
    return 0;
}
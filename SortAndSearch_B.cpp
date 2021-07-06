/*
B. [ProPTIT-Algorithm-Sort and Search] Sắp xếp xâu kí tự

Cho một danh sách chứa cả các số và các từ.
Yêu cầu bạn hãy sắp xếp danh sách này tăng dần sao cho các từ theo thứ tự từ điển, các số theo thứ tự số.
Hơn nữa, nếu phần tử thứ n là số thì danh sách sau khi sắp xếp phần tử thứ n cũng phải là số, nếu là từ thì vẫn là từ.
Lưu ý: Các từ chỉ gồm các chữ in thuờng trong bảng chữ cái tiếng Anh.

Input
Dòng đầu tiên là số danh sách T (1≤T≤100).
T dòng tiếp theo, mỗi dòng là một danh sách. Mỗi phần tử của danh sách cách nhau bởi dấu phẩy (",") theo sau là dấu cách, và danh sách được kết thúc bằng dấu chấm (".").

Output
Với mỗi danh sách trong dữ liệu, xuất ra danh sách đã sắp xếp thỏa mãn yêu cầu đề bài (có định dạng như trong dữ liệu).

Example

input
2
nam, nay, la, sinh, nhat, proptit, 10, tuoi.
chuc, clb, ngay, cang, phat, trien.

output
la, nam, nay, nhat, proptit, sinh, 10, tuoi.
cang, chuc, clb, ngay, phat, trien.
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t;
string s;

bool isNumber(char c)
{
    return (c == '-' || (c >= '0' && c <= '9'));
}

void solve()
{
    vector<bool> type;   // 1: số, 0: từ
    vector<int> num;     // Số
    vector<string> word; // Từ
    bool stop = 0;

    while (1)
    {
        cin >> s;
        if (s.back() == '.')
            stop = 1;
        s.pop_back();
        bool kt = isNumber(s[0]);
        type.push_back(kt);
        if (kt)
            num.push_back(stoi(s));
        else
            word.push_back(s);
        if (stop)
            break;
    }

    sort(num.begin(), num.end());
    sort(word.begin(), word.end());

    int n = 0; // Số lượng số
    int w = 0; // Số lượng từ
    for (int i = 0; i < type.size(); i++)
    {
        if (type[i])
            cout << num[n++];
        else
            cout << word[w++];

        if (i == type.size() - 1)
            cout << ".\n";
        else
            cout << ", ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
        solve();
    return 0;
}
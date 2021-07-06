/*
H. Điện thoại

Điện thoại của bạn có một APP, có 2 loại truy vấn sau:
1: App sinh ra 1 thông báo.
2: bạn đọc tất cả các thông báo "chưa đọc " theo thứ tự trên xuống.
Nhiệm vụ của bạn rất đơn giản, hãy đọc các thông báo đó.

Input
Gồm nhiều truy vấn (không quá 100000 truy vấn), mỗi truy vấn trên 1 dòng có 2 dạng:
1 x: thêm thông báo về tin x (1≤x≤1e6)
2: đọc các thông báo chưa đọc theo thứ tự từ trên xuống.
Truy vấn kết thúc bằng chữ "END."

Output
Với mỗi truy vấn loại 1 in ra màn hình dòng chữ "NEW".
Với mỗi truy vấn loại 2, in ra màn hình các thông tin trên 1 dòng tin của các thông báo.

Example

input
1 3
1 1
1 6
2
1 7
END.

output
NEW
NEW
NEW
3 1 6 
NEW
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v;

void New()
{
    int x;
    cin >> x;
    v.push_back(x);
    cout << "NEW\n";
}

void Read()
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);

    string s;
    while (cin >> s)
    {
        if (s == "END.")
            break;
        if (s == "1")
            New();
        else if (s == "2")
            Read();
    }
    return 0;
}
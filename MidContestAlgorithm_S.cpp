/*
S. J&M

Có thể bạn chưa biết Jack là con của nhà vua xứ PELAXS và còn có một người em tên là Muvas.
Hiện nay nhà vua đã đến tuổi gần đất xa trời và muốn truyền lại ngai vàng cho 2 con tuy nhiên vẫn chưa biết chọn ai.
Ông đành nghĩ ra một cách là chia quân đội hoàng gia ra làm hai và cho hai con tranh tài.
Nếu ai thắng ông sẽ chọn làm vua xứ PELAXS thứ n+1.
Tuy nhiên để tránh làm tổn hao quân đội, ông muốn hai con đọ trí thông minh trước.
Câu hỏi của ông là hãy kiểm tra xem quân đội của 2 bên có tương đương nhau hay không.
Hai độ quân được xếp thành 2 hàng ngang, mỗi binh lính có một chỉ số sức mạnh được đánh từ 0−9.

Hai đội quân được gọi là tương đương nếu thỏa mãn 1 trong 2 điều kiện sau:
1. Tất cả các binh lính ở vị trí giống nhau đều có chỉ số sức mạnh giống nhau.
2. Nếu chia đội quân của Jack thành 2 nhóm ngăn cách nhau ở chính giữa hàng thành 2 đội J1 và J2, đội quân của Muvas thành M1, M2 thì một trong những điều sau là đúng:
- J1 tương đương với M1 và J2 tương đương với M2.
- J1 tương đương với M2 và J2 tương đương với M1.

Hãy cùng giúp anh em nhà J&M nhé

Input
Input gồm 3 dòng, dòng đầu tiên là n(1≤n≤3∗1e6) là số binh lính của mỗi đội quân.
Hai dòng tiếp theo là chỉ số sức mạnh của từng binh lính trong đội quân của Jack mà Muvas

Output
In ra "YES" nếu 2 đội quân là tương đương nhau và "NO" trong trường hợp còn lại.

Examples

input
4
1 1 2 1
1 2 1 1

output
YES


input
4
1 1 2 2
1 2 1 2

output
NO
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string J = "#", M = "#"; // Khai báo thừa để dùng index từ 1 đến n cho dễ hơn thôi

bool check(int l1, int r1, int l2, int r2)
{
    int len = r1 - l1 + 1;
    int dd1[10] = {0}, dd2[10] = {0};
    bool ok = 1;
    for (int i = 0; i < len; ++i)
    {
        if (J[i + l1] != M[i + l2])
            ok = 0;
        dd1[J[i + l1] - '0']++;
        dd2[M[i + l2] - '0']++;
    }
    for (int i = 0; i <= 9; ++i)
    {
        if (dd1[i] != dd2[i])
            return 0;
    }
    if (ok)
        return 1;
    if (len % 2 == 1)
        return 0;
    int tb1 = (l1 + r1) / 2, tb2 = (l2 + r2) / 2;
    if (check(l1, tb1, l2, tb2) && check(tb1 + 1, r1, tb2 + 1, r2))
        return 1;
    if (check(l1, tb1, tb2 + 1, r2) && check(tb1 + 1, r1, l2, tb2))
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        J.push_back(c);
    }
    for (int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        M.push_back(c);
    }

    if (check(1, n, 1, n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
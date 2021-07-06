/*
B. Chuỗi hạt bồ đề

Trong chuyến đi khám phá thế giới của mình, Grenore muốn tìm hiểu thêm về văn hóa phương Đông.
Cậu được biết rằng để tìm hiểu văn hóa phương Đông một cách nhanh nhất, người ta sẽ đi đến những ngôi chùa.
Khi Grenore đến nơi, thứ duy nhất làm cậu thích thú là những chuỗi hạt bồ đề, các chuỗi hạt bồ đề khi mới nhìn thoáng qua, chúng có vẻ khác nhau, nhưng thực chất đó chỉ là sự thay đổi trong thứ tự của chuỗi hạt, ví dụ như chuỗi hạt có chữ "ryuu" và "yuur" là như nhau, chỉ có một điều duy nhất là hạt chữ "r" từ vị trí đầu bị di chuyển xuống cuối.
Bằng cách di chuyển này, từ các chuỗi hạt giống nhau, ta có thể tạo ra các chuỗi hạt khác nhau.
Grenore cực kỳ thấy hứng thú với điều này, cậu chọn ra n chuỗi hạt, và kiểm tra xem liệu chúng có thể đưa về một dãy giống hệt nhau hay không (các hạt chỉ có thể di chuyển từ đầu về cuối, vì các nhà sư cho rằng di chuyển hạt từ cuối về đầu là xúc phạm thần linh) với số bước ít nhất.

Input
Dòng đầu tiên gồm một số n (1≤n≤50) là số chuỗi hạt bồ đề mà Grenore đã lấy.
n dòng tiếp theo, mỗi dòng là một xâu chỉ gồm các chữ cái tiếng Anh, viết thường, biểu thị một chuỗi hạt.
Các xâu đều có cùng một kích thước, mỗi xâu không có quá 50 ký tự (1≤|s|≤50)

Output
Gồm một số nguyên duy nhất là số bước biến đổi để các chuỗi hạt trở nên giống nhau, nếu không thể biến đổi, in ra −1.

Examples

input
2
ryuu
yuur

output
1


input
2
abcdef
abcdee

output
-1
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(vector<string> v, int n)
{
    int res = 1e6;
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            string str = v[j] + v[j];
            int pos = str.find(v[i]);
            if (pos == -1)
                return -1;
            count += pos;
        }
        res = min(res, count);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    cout << solve(v, n);
    return 0;
}
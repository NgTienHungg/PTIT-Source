/*
F. Cooking

Louis là một chàng trai rất dam dang. Anh ấy muốn nấu súp cho bữa tối của mình.
Để nấu súp, anh ấy cần mua CHÍNH XÁC n lít nước.
Ở gần nhà Louis có 2 cửa hàng bán nước, số nước là không giới hạn, tuy nhiên cửa hàng 1 chỉ có loại chai 1 lít, cửa hàng 2 chỉ có loại chai 2 lít.
Cửa hàng 1 bán 1 chai 1 lít với giá a VND, cửa hàng 2 bán 1 chai 2 lít với giá b VND.
Louis thì nghèo, nên anh ấy muốn mua chính xác n lít nước với số tiền nhỏ nhất có thể. Bạn hãy giúp anh ấy nhé.
Bạn phải trả lời cho q truy vấn, mỗi truy vấn bao gồm 3 số nguyên n,a,b lần lượt là số lít nước cần mua để nấu súp, giá 1 chai nước 1 lít, giá 1 chai nước 2 lít.
Hãy in ra số tiền nhỏ nhất Louis phải trả để mua chính xác n lít nước về nấu súp.

Input
Dòng đầu tiên gồm 1 số nguyên q (1≤q≤1e5) - số truy vấn.
q dòng tiếp theo, mỗi dòng gồm 3 số nguyên n (1≤n≤1e12), a, b (1≤a,b≤1000) - số tiền của chai nước 1 lít và số tiền của chai nước 2 lít.

Output
Với mỗi truy vấn, in ra số tiền nhỏ nhất Louis phải trả để mua chính xác n lít nước.

Example

input
4
10 1 3
7 3 2
1 1000 1
1000000000000 42 88

output
10
9
1000
42000000000000
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long res = 0;
    if (b < 2 * a)
    {
        res += b * (n / 2);
        if (n % 2 == 1)
            res += a;
    }
    else
        res = n * a;
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        TestCase();
    return 0;
}
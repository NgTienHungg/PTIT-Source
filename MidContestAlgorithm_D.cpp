/*
D. Rút gỗ

Lại là Daisy và Louis, 2 người này liên tục thách nhau những trò chơi oái oăm để xem ai thông minh hơn ai.
Trò chơi lần này như sau: Louis rút ra 1 tập gồm n que gỗ đặt trên bàn.
Mỗi lượt người chơi sẽ loại bỏ đi chính xác k que gỗ ( có thể từ bên trái hoặc bên phải ).
Louis chơi trước, bởi vì cậu ta nghĩ ra trò này.
Nếu có ít hơn k que gỗ ở trên bàn trước lượt chơi nào đó, trò chơi kết thúc.
Louis sẽ thắng nếu anh ấy chơi với số lượt nhiều hơn Daisy. Hãy giúp anh ta dự đoán kết quả trước khi trò chơi bắt đầu nhé.

Input
Dòng đầu tiên gồm số bộ test q (1≤q≤1e5)
q dòng tiếp theo, mỗi dòng gồm 2 số nguyên n và k (1≤n,k≤1e18,k≤n) - số que gỗ mà Louis đặt trên bàn và số nguyên k - số que gỗ rút ra sau mỗi lượt chơi.

Output
In ra trên q dòng. Nếu Louis thắng, in ra "YES", ngược lại in ra "NO".

Example

input
2
1 1
10 4

output
YES
NO
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    long long n, k;
    cin >> n >> k;
    if ((n / k) % 2 == 1)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
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
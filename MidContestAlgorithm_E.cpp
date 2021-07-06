/*
E. Kén rể

Kage Bunshin no Jutsu hay còn gọi là ảnh phân thân thuật, là một nhẫn thuật nổi tiếng của làng konoha.
Thông thường thuật này sẽ tạo ra 2 ảnh phân thân, với người có lượng chakra bằng n thì ảnh phân thân sẽ có chakra bằng n−1, và khi thi triển thuật 2 phân thân sẽ đứng ở 2 bên của ninja tạo ra chúng.
Và tất nhiên ninja sử dụng thuật này phải có lượng chakra lớn hơn 1.

Ví dụ
Chakra = 3
[2,3,2]
Chakra = 1
[1]

Kage Bunshin no Jutsu là một nhẫn thuật mạnh, tuy nhiên Tajū Kage Bunshin no Jutsu (đa trọng phân thân thuật) lại là một dinkout khác.
Bản chất của thuật này là khi tạo ra phân thân, mỗi phân thân lại tiếp tục sử dụng phân thân ảnh.
Vì có thời gian hồi chiêu lâu, nên mỗi người và mỗi phân thân chỉ được sử dụng thuật này một lần.

Một vài ví dụ:
Chakra = 3
[1,2,1,3,1,2,1]
Chakra = 4
[1,2,1,3,1,2,1,4,1,2,1,3,1,2,1]

Khác bọt với các ninja khác, Naruto có chakra cửu vĩ nên lượng chakra của ông gần như là vô hạn, mỗi lượt tấn công của Naruto đối thủ của ông chỉ kịp nhìn xem phân thân, hoặc chính ông đứng ở vị chí thứ bao nhiêu.
Ví dụ phân thân ở vị trí đầu tiên sẽ có chakra = 1 phân thân ở vị trí thứ 4 sẽ có chakra = 3.
Trong cuộc thi tuyển chồng cho Himawari, Naruto đưa ra cho các chàng rể của ông một thử thách.
Đó là phải đánh bại tất cả các phần phân của ông trong n lượt đánh.
Tuy nhiên bạn thừa biết việc đánh bại naruto là điều vô cùng khó, bạn chỉ có thể làm điều đó nếu sử dụng tối ưu lượng chakra, nghĩa là lượng chakra bạn tạo ra trong mỗi lượt đánh chính bằng 1 phân thân mà Naruto gọi lên thi đấu.
Viết chương trình giúp juzo cưới được Himawari nào <3

Input
gồm 2 dòng dòng đầu tiên là số nguyên dương n chỉ số lượt đánh (1≤n≤1e5) dòng tiếp theo gồm n số nguyên dương x là vị trí của phân thân trong lượt đánh tương ứng (1≤Xi≤1e18)

Output
n số nguyên dương chỉ lượng chakra thích hợp cho mỗi lượt đánh

Example

input
5
1 2 3 4 5

output
1 2 1 3 1 
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<long long> f;
void solve()
{
    /* Lưu pow(2,i) các số < 1e18 */
    f.push_back(1);
    for (int i = 1; i <= 100; ++i)
    {
        if (2 * f[i - 1] > 1e18)
            return;
        f.push_back(2 * f[i - 1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    solve();
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = f.size() - 1; j >= 0; --j)
        {
            if (a[i] < f[j])
                continue;
            if (a[i] == f[j])
            {
                cout << j + 1 << " ";
                break;
            }
            else
                a[i] %= f[j];
        }
    }
    return 0;
}
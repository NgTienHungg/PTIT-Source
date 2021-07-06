/*
J. BINARY Trên tập số thực

Các em à thuật toán chặt nhị phân không đơn thuần như những gì chúng ta học rằng cho 1 tâp được xắp xếp và tìm vị trí của phần tử đầu tiên lơn hơn hoặc bằng x đâu.
binary thường khắc phục những bài toán số thực có công thức nhưng dễ sai sô.
binary thường giải các bài toán kiểu tối ưu nếu ta làm được điểu này trên x thì ta hi vọng sẽ làm được nó trên số lơn hơn hoặc nhỏ hơn tùy theo bài toán.
binary tối ưu các thuật toán dp O(N^2),O(N^3),...Không có sách nào nói chúng ta biết như vậy, cũng không có mô hình nào cả chỉ có làm nhiều thì ta sẽ dần biết nhiều hơn.

Cho 1 màng gồm n phần tử và một số k (1<=n<=10^6 và 0<=k<=99 ).
Yêu cầu bài toán san phẳng mảng a ra thành 1 số duy nhất in other word :v ta phải đưa mảng a về mảng gồm toàn số x.Tìm x max biết:
Nếu ta di chuyển y từ vị trí này sang vị trí khác thì y sẽ bị tiêu hao 1 lượng là y*k/100.
Ví dụ mảng a=[1,4,2] và k=50 nếu ta đưa 2 đơn vị sang vị trí 1 thì ta sẽ mất đi 2*50/100=1 lúc này mảng a=[2,2,2].

Input
dòng đâu tiên chưa 2 số nguyên dương n và k.
dòng thứ 2 chưa n số thực a_i (0<=a_i<=1000)

Output
đưa ra số thực x là kết quả bài toán.
Lưu ý vì số thực nên kết quả được coi là chính xác nếu |x_jury-x_answer|<0.000001.

Examples

input
3 50
4 2 1

output
2.000000


input
2 90
1 11

output
1.909091
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef double db;

int n, k;
vector<db> v;
db res, sum = 0;

void init()
{
    scanf("%d %d", &n, &k);
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
        sum += v[i];
    }
}

bool kt(db x)
{
    db s = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i] < x)
            s += ((x - v[i]) / (1 - (db)k / 100)) * (db)k / 100;
    return (s + x * n <= sum);
}

void bs(db l, db r)
{
    if (l > r)
        return;
    if (l == r || r - l < 0.0000001)
    {
        if (kt(l))
            res = l;
        if (kt(r))
            res = r;
        return;
    }
    db tmp = (l + r) / 2;
    if (kt(tmp))
    {
        res = tmp;
        bs(tmp, r);
    }
    else
        bs(l, tmp);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    init();
    sort(v.begin(), v.end());
    bs(0, v.back());
    printf("%.6lf", res);
    return 0;
}

//! Hard
// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/H
// H. [ProPTIT-Algorithm-Queue] Quay bảng

#include <bits/stdc++.h>
using namespace std;

struct Data {
    int a[2][3];
    int cou = 0;
    
    void input() {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> a[i][j];
            }
        }
    }

    void xoayNuaTrai() {
        int x = a[0][0], y = a[0][1], z = a[1][0], t = a[1][1];
        a[0][0] = z;
        a[0][1] = x;
        a[1][0] = t;
        a[1][1] = y;
    }

    void xoayNuaPhai() {
        int x = a[0][1], y = a[0][2], z = a[1][1], t = a[1][2];
        a[0][1] = z;
        a[0][2] = x;
        a[1][1] = t;
        a[1][2] = y;
    }
};

bool isEqual(Data A, Data B) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (A.a[i][j] != B.a[i][j])
                return 0;
        }
    }
    return 1;
}

void TestCase() {
    Data A, B;
    A.input();
    B.input();
    queue<Data> q;
    q.push(A);

    while (1) {
        Data temp = q.front();
        if (isEqual(temp, B)) {
            cout << temp.cou << endl;
            return;
        }

        Data x = temp, y = temp;
        x.xoayNuaTrai();
        y.xoayNuaPhai();
        x.cou = y.cou = temp.cou + 1;

        q.pop();
        q.push(x);
        q.push(y);
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}

/*
Giống như việc sinh toàn bộ cấu hình, sử dụng struct với 2 tham số mảng 2 chiều và 1 biến đếm số lần đã quay.
Bắt đầu từ cấu hình A, sinh cho đến khi nào gặp cấu hình t/m cấu hình B, in ra 'cou'.
Khi cấu hình đang xét chưa t/m, sinh thêm 2 cấu hình mới và đẩy vào queue, đồng thời loại bỏ cấu hình đang xét vì không còn t/m.
2 cấu hình mới gồm, 1 cấu hình xoay nửa trái mảng, 1 cấu hình xoay nửa phải mảng, số lần xoay của cấu hình = số lần xoay của cấu hình trước + 1.
*/
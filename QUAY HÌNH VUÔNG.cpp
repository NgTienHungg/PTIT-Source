#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

struct Data {
    int arr[2][3];
    int count;

    Data(int a[2][3], int x) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                arr[i][j] = a[i][j];
            }
        }
        count = x;
    }

    void xoay_trai() {
        int x = arr[0][0], y = arr[0][1], z = arr[1][0], t = arr[1][1];
        arr[0][0] = z, arr[0][1] = x, arr[1][0] = t, arr[1][1] = y;
    }

    void xoay_phai() {
        int x = arr[0][1], y = arr[0][2], z = arr[1][1], t = arr[1][2];
        arr[0][1] = z, arr[0][2] = x, arr[1][1] = t, arr[1][2] = y;
    }
};

bool isEqual(int a[2][3], int b[2][3]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a[i][j] != b[i][j])
                return 0;
        }
    }
    return 1;
}

void TestCase() {
    int a[2][3], b[2][3];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> b[i][j];
        }
    }

    queue<Data> q;
    q.push(Data(a, 0));

    while (!q.empty()) {
        Data top = q.front();
        q.pop();
        
        if (isEqual(top.arr, b)) {
            cout << top.count;
            return;
        }

        Data x = top, y = top;
        x.xoay_trai();
        y.xoay_phai();
        x.count = y.count = top.count + 1;

        q.push(x);
        q.push(y);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
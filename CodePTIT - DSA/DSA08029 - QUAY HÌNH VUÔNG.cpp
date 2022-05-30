// https://code.ptit.edu.vn/student/question/DSA08029
// QUAY HÌNH VUÔNG

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
 
    void xoayTrai() {
        int x = a[0][0], y = a[0][1], z = a[1][0], t = a[1][1];
        a[0][0] = z;
        a[0][1] = x;
        a[1][0] = t;
        a[1][1] = y;
    }
 
    void xoayPhai() {
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
 
    while (true) {
        Data temp = q.front();
        if (isEqual(temp, B)) {
            cout << temp.cou << endl;
            return;
        }
 
        Data x = temp, y = temp;
        x.xoayTrai();
        y.xoayPhai();
        x.cou = y.cou = temp.cou + 1;
 
        q.pop();
        q.push(x);
        q.push(y);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
// https://www.spoj.com/PTIT/problems/BCQUEUE/
// BCQUEUE - Cấu trúc dữ liệu hàng đợi (queue) (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

struct QUEUE {
    int q[1005];
    int sz = 0;

    int size() {
        return sz;
    }

    bool empty() {
        if (sz == 0) return 1;
        return 0;
    }

    void push() {
        int x;
        cin >> x;
        q[sz++] = x;
    }

    void pop() {
        if (sz == 0) return;
        for (int i = 0; i < sz - 1; i++) 
            q[i] = q[i + 1];
        sz--;
    }

    int front() {
        if (sz == 0) return -1;
        return q[0];
    }

    int back() {
        if (sz == 0) return -1;
        return q[sz - 1];
    }
};

int main() {
    int Test;
    cin >> Test;
    QUEUE q;
    while (Test--) {
        int t;
        cin >> t;
        if (t == 1) cout << q.size() << endl;
        else if (t == 2) {
            if (q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (t == 3) q.push();
        else if (t == 4) q.pop();
        else if (t == 5) cout << q.front() << endl;
        else if (t == 6) cout << q.back() << endl;
    }
    return 0;
}
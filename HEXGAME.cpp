#include <bits/stdc++.h>
using namespace std;

struct Node {
    string config;
    int high;
    Node(string config, int high) {
        this->config = config;
        this->high = high;
    }
};

string S = "", T = "1238004765", le = "0012345678", ri = "0012345678";
map<string, int> xuoi, nguoc;
bool stop = 0;

/* Quay xuôi */
const int L[10] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
const int R[10] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
void quayXuoi(string s) {
    for (int i = 0; i < 10; ++i) {
        le[i] = s[L[i]];
        ri[i] = s[R[i]];
    }
}

/* Quay ngược */
const int l[10] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
const int r[10] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};
void quayNguoc(string s) {
    for (int i = 0; i < 10; ++i) {
        le[i] = s[l[i]];
        ri[i] = s[r[i]];
    }
}

void bfsXuoi() {
    queue<Node> q;
    q.push(Node(S, 0));
    xuoi[S] = 0;

    while (!q.empty()) {
        Node x = q.front(); q.pop();
        if (x.config == T) {
            stop = 1;
            cout << x.high;
            return;
        }
        // Dừng BFS xuôi, BFS ngược từ cuối lại
        if (x.high > 15) return;

        quayXuoi(x.config);
        if (xuoi.find(le) == xuoi.end()) {
            q.push(Node(le, x.high + 1));
            xuoi[le] = x.high + 1;
        }
        if (xuoi.find(ri) == xuoi.end()) {
            q.push(Node(ri, x.high + 1));
            xuoi[ri] = x.high + 1;
        }
    }
}

void bfsNguoc() {
    queue<Node> q;
    q.push(Node(T, 0));
    nguoc[T] = 0;

    while (!q.empty()) {
        Node x = q.front(); q.pop();
        if (xuoi.find(x.config) != xuoi.end()) {
            cout << x.high + xuoi[x.config];
            return;
        }

        quayNguoc(x.config);
        if (nguoc.find(le) == nguoc.end()) {
            q.push(Node(le, x.high + 1));
            nguoc[le] = x.high + 1;
        }
        if (nguoc.find(ri) == nguoc.end()) {
            q.push(Node(ri, x.high + 1));
            nguoc[ri] = x.high + 1;
        }
    }
}

void TestCase() {
    for (int i = 1; i <= 10; ++i) {
        int x; cin >> x;
        S += char(x + '0');
    }
    bfsXuoi();
    if (!stop) bfsNguoc();

    stop = 0;
    S.clear();
    xuoi.clear();
    nguoc.clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
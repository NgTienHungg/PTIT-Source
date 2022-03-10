// https://code.ptit.edu.vn/student/question/DSA08003
// HÀNG ĐỢI HAI ĐẦU (DEQUEUE)

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    string s;
    int x;
    deque<int> dq;
    while (n--) {
        cin >> s;
        if (s == "PUSHBACK") {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PUSHFRONT") {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "POPBACK") {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (s == "POPFRONT") {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "PRINTFRONT") {
            if (!dq.empty())
                cout << dq.front();
            else
                cout << "NONE";
            cout << endl;
        }
        else if (s == "PRINTBACK") {
            if (!dq.empty())
                cout << dq.back();
            else
                cout << "NONE";
            cout << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
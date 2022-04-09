// https://code.ptit.edu.vn/student/question/DSA07018
// TỔNG ĐA THỨC

#include <bits/stdc++.h>
using namespace std;

class Data {
public:
    int dd[10001] = {};
    
    Data(string str) {
        stringstream ss(str);
        string s;
        while (ss >> s) {
            if (s == "+") continue;
            int i = 0;
            while (isdigit(s[i])) i++;
            int x = stoi(s.substr(0, i));
            while (!isdigit(s[i])) i++;
            int y = stoi(s.substr(i));
            dd[y] += x;
        }
    }
};

void testCase() {
    string a; getline(cin, a);
    string b; getline(cin, b);
    Data x = Data(a);
    Data y = Data(b);

    int dd[10001] = {}, count = 0;
    for (int i = 0; i < 10001; ++i) {
        dd[i] = x.dd[i] + y.dd[i];
        if (dd[i] > 0) count++;
    }

    for (int i = 10000; i >= 0; --i) {
        if (dd[i] > 0) {
            cout << dd[i] << "*x^" << i;
            count--;
            if (count > 0) cout << " + ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// 1
// 3*x^8 + 7*x^2 + 4*x^0
// 11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
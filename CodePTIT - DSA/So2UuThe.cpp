#include <bits/stdc++.h>
using namespace std;

class Data {
public:
    string str;
    int cou;

    Data(string s, int c) {
        str = s;
        cou = c;
    }
};

void testCase() {
    int n; cin >> n;
    queue<Data> q;
    vector<string> res;
    q.push(Data("", 0));
    while (res.size() != n) {
        string str = q.front().str;
        int cou = q.front().cou;
        q.pop();

        if (str[0] == '0') {
            continue;
        }
        if (cou * 2 > str.length()) {
            res.push_back(str);
        }

        q.push(Data(str + '0', cou));
        q.push(Data(str + '1', cou));
        q.push(Data(str + '2', cou + 1));
    }
    for (int i = 0; i < n; ++i) {
        cout << res[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isNumber(char c) {
    return (c == '-' || (c >= '0' && c <= '9'));
}
 
bool cmpPosi(string a, string b) {
    if (a.length() < b.length())
        a.insert(0, string(b.length() - a.length(), '0'));
    else if (a.length() > b.length())
        b.insert(0, string(a.length() - b.length(), '0'));
    return a < b;
}
    
bool cmpNega(string a, string b) {
    if (a.length() == b.length())
        return a > b;
    return a.length() > b.length();
}

vector<bool> type;
vector<string> posiNum;
vector<string> negaNum;
vector<string> word;

void solve() {
    string s;
    bool stop = false;
    do {
        cin >> s;
        s[0] = tolower(s[0]);
        if (s.back() == '.') {
            s.pop_back();
            stop = true;
        }

        bool kt = isNumber(s[0]);
        type.push_back(kt);

        if (kt == 1) {
            if (s[0] != '-')
                posiNum.push_back(s);
            else
                negaNum.push_back(s);
        }
        else {
            word.push_back(s);
        }
    } while (!stop);

    sort(posiNum.begin(), posiNum.end(), cmpPosi);
    sort(negaNum.begin(), negaNum.end(), cmpNega);
    sort(word.begin(), word.end());

    int n = 0, m = 0;
    for (int i = 0; i < type.size(); i++) {
        if (type[i] == 1) {
            if (n < negaNum.size()) {
                cout << negaNum[n];
                n++;
            }
            else {
                cout << posiNum[n - negaNum.size()];
                n++;
            }
        }
        else {
            if (i == 0)
                word[0][0] = toupper(word[0][0]);
            cout << word[m++];
        }

        if (i != type.size() - 1)
            cout << " ";
    }
    cout << ".";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
#include "testlib.h"
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

    // while (a.length() < b.length())
    //     a = "0" + a;
    // while (b.length() < a.length())
    //     b = "0" + b;
    // return a < b;
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

void read(ifstream &f) {
    type.clear();
    posiNum.clear();
    negaNum.clear();
    word.clear();

    string s;
    bool stop = false;
    do {
        f >> s;
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
}

void solve(ofstream &f) {
    sort(posiNum.begin(), posiNum.end(), cmpPosi);
    sort(negaNum.begin(), negaNum.end(), cmpNega);
    sort(word.begin(), word.end());

    int n = 0, m = 0;
    for (int i = 0; i < type.size(); i++) {
        if (type[i] == 1) {
            if (n < negaNum.size()) {
                f << negaNum[n];
            }
            else {
                f << posiNum[n - negaNum.size()];
            }
            n++;
        }
        else {
            if (i == 0)
                word[0][0] = toupper(word[0][0]);
            f << word[m++];
        }

        if (i != type.size() - 1)
            f << " ";
    }
    f << ".";
}

int main() {
    int nTest = 50;
    for (int i = 1; i <= nTest; ++i) {
        const char *cstrin = ("input/" + to_string(i) + ".in").c_str();
        ifstream fin(cstrin, ios::in);
        read(fin);
        fin.close();

        const char *cstrout = ("output/" + to_string(i) + ".out").c_str();
        ofstream fout(cstrout, ios::out);
        solve(fout);
        fout.close();
    }
}
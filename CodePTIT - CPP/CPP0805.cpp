// https://code.ptit.edu.vn/student/question/CPP0805
// HỢP VÀ GIAO CỦA HAI FILE VĂN BẢN

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    set<string> s1, s2;
    ifstream fi1, fi2;

    fi1.open("DATA1.in");
    while (fi1 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s1.insert(s);
    }
    fi1.close();
    
    fi2.open("DATA2.in");
    while (fi2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s2.insert(s);
    }
    fi2.close();

    map<string, int> mp;
    for (auto x : s1) mp[x]++;
    for (auto x : s2) mp[x]++;
    
    for (auto x : mp) cout << x.first << " ";
    cout << endl;

    for (auto x: mp) {
        if (x.second > 1)
            cout << x.first << " ";
    }
    return 0;
}
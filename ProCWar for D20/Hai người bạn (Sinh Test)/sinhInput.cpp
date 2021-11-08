#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

void GenTest() {
    int n, x;
    string s;

    // n = rnd.next(50, 100);
    // for (int i = 1; i <= n; ++i) {
    //     x = rnd.next(0, 1); // random 0 = num, 1 = word
    //     if (x == 0) {
    //         string dau = rnd.next("[-]{0,1}");
    //         s = rnd.next("[0-9]{100,900}");
    //         if (dau == "-") {
    //             if (s[0] != '0')
    //                 s = dau + s;
    //         }
    //         else
    //             s = rnd.next("[0]{0,100}") + s;
    //         cout << s;
    //     }
    //     else {
    //         s = rnd.next("[a-z]{10,100}");
    //         if (i == 1)
    //             s[0] = toupper(s[0]);
    //         cout << s;
    //     }
    //     if (i != n) cout << " ";
    // }
    // cout << ".";

    // final
    for (int i = 1; i <= 3; ++i) {
        s = rnd.next("[0-9]{1,3}");
        cout << s << " ";
    }
    s = rnd.next("[1-9]{500000}");
    cout << s << ".";
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int t = 50;

    for (int i = 1; i <= t; ++i) {
        const char *cstr = ("input/" + to_string(i) + ".in").c_str();
        FILE *f = freopen(cstr, "w", stdout);
        GenTest();
        fclose(f);
    }
}
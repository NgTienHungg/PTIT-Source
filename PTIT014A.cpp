// https://www.spoj.com/PTIT/problems/PTIT014A/
// PTIT014A - 2014 Bài A - Đoán số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s == "dung")
            cout << 2;
        else if (s == "lon hon")
            cout << 1;
        else if (s == "nho hon")
            cout << 3;
        cout << endl;
    }
    return 0;
}
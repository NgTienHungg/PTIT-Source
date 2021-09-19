// https://www.spoj.com/PTIT/problems/P131SUMD/
// P131SUMD - SUM1 D - Nhầm chữ số

#include <bits/stdc++.h>
using namespace std;

int max(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '5')
            b[i] = '6';
    }
    return atoi(a.c_str()) + atoi(b.c_str());
}

int min(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '6')
            b[i] = '5';
    }
    return atoi(a.c_str()) + atoi(b.c_str());
}

int main()
{
    int A, B;
    cin >> A >> B;
    string a = to_string(A);
    string b = to_string(B);
    cout << min(a, b) << " " << max(a, b);
}
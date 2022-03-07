// https://www.spoj.com/PTIT/problems/BCSINH/
// BCSINH - Sinh các dãy nhị phân độ dài n (Cơ bản)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    v.push_back("0");
    v.push_back("1");

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < pow(2, i); j++)
            v.push_back(v[j]);

        for (int j = 0; j < pow(2, i); j++)
            v[j] = "0" + v[j];

        for (int j = pow(2, i); j < 2 * pow(2, i); j++)
            v[j] = "1" + v[j];
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
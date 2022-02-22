// https://www.spoj.com/PTIT/problems/P163PROD/
// P163PROD - ROUND 3D - Nếu cuộc sống không có số 0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string sum = to_string(atoi(s1.c_str()) + atoi(s2.c_str()));
    int i = 0, j = 0, k = 0;
    while (i < s1.length())
    {
        if (s1[i] == '0')
            s1.erase(i, 1);
        else
            i++;
    }
    while (j <= s2.length())
    {
        if (s2[j] == '0')
            s2.erase(j, 1);
        else
            j++;
    }
    while (k <= sum.length())
    {
        if (sum[k] == '0')
            sum.erase(k, 1);
        else
            k++;
    }
    if (atoi((sum).c_str()) == (atoi(s1.c_str()) + atoi(s2.c_str())))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
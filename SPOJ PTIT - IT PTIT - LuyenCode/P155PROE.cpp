// https://www.spoj.com/PTIT/problems/P155PROE/
// P155PROE - ROUND 5E - Điện tử số

#include <bits/stdc++.h>
using namespace std;

int check(char c)
{
    if (c == '0')
        return 2; // 0, 8
    if (c == '1')
        return 7; // 0, 1, 3, 4, 7, 8, 9
    if (c == '2')
        return 2; // 2, 8
    if (c == '3')
        return 3; // 3, 8, 9
    if (c == '4')
        return 3; // 4, 8, 9
    if (c == '5')
        return 4; // 5, 6, 8, 9
    if (c == '6')
        return 2; // 6, 8
    if (c == '7')
        return 5; // 0, 1, 3, 7, 8, 9
    if (c == '8')
        return 1; // 8
    if (c == '9')
        return 2; // 8, 9
}
int main()
{
    string s;
    cin >> s;
    cout << check(s[0]) * check(s[1]);
    return 0;
}
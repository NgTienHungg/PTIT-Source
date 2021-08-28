// https://www.spoj.com/PTIT/problems/P182PROH/
// P182PROH - ROUND 2H - 24 Giờ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.substr(8, 2) == "PM")
    {
        int num = stoi(s.substr(0, 2));
        if (num != 12)
        {
            num += 12;
            string tmp = to_string(num);
            s.replace(0, 2, tmp);
        }
    }
    else if (s.substr(0, 2) == "12")
        s.replace(0, 2, "00");

    s.erase(8, 2);
    cout << s;
    return 0;
}

//? 12:00:00PM => 12:00:00
//? 12:00:00AM => 00:00:00
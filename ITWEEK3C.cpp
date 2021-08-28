// https://code.itptit.com/problems/100051
// Bí kíp luyện rồng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    // Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j][0] < a[i][0])
                swap(a[i], a[j]);
            else if (a[j][0] == a[i][0])
            {
                if (a[j][1] > a[i][1])
                    swap(a[i], a[j]);
            }
        }
    }
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (s <= a[i][0])
        {
            check = 0;
            break;
        }
        else
            s += a[i][1];
    }
    if (check == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

//? Không cần phải chiến đấu theo thứ tự, con rồng nào yếu hơn thì giết trước
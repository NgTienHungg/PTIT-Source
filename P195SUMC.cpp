// https://www.spoj.com/PTIT/problems/P195SUMC/
// P195SUMC - Bán vé

#include <bits/stdc++.h>
using namespace std;

void increase(vector<int> &count, int x)
{
    if (x == 25)
        count[0]++;
    if (x == 50)
        count[1]++;
    if (x == 100)
        count[2]++;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> count(3, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        increase(count, v[i]);
        if (v[i] == 25)
            continue;
        while (v[i] > 25)
        {
            if (v[i] == 100 && count[1] > 0)
            {
                v[i] -= 50;
                count[1]--;
            }
            else
            {
                v[i] -= 25;
                count[0]--;
            }
            if (count[0] < 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
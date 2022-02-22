// https://www.spoj.com/PTIT/problems/P195SUMB/
// P195SUMB - Ăn bánh

#include <bits/stdc++.h>
using namespace std;

struct Player
{
    int count = 0;
    int time = 0;
} Leviz, Haley;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1)
    {
        cout << "1 0";
        return 0;
    }
    Haley.time = v[0];
    Haley.count++;
    Leviz.time = v[n - 1];
    Leviz.count++;
    for (int i = 0, j = n - 1; (i + 1) != j;)
    {
        if (Haley.time < Leviz.time)
        {
            i++;
            Haley.time += v[i];
            Haley.count++;
        }
        else if (Haley.time > Leviz.time)
        {
            j--;
            Leviz.time += v[j];
            Leviz.count++;
        }
        else
        {
            i++;
            j--;
            Haley.time += v[i];
            Haley.count++;
            if (i == j)
                break;
            Leviz.time += v[j];
            Leviz.count++;
        }
    }
    cout << Haley.count << " " << Leviz.count;
    return 0;
}
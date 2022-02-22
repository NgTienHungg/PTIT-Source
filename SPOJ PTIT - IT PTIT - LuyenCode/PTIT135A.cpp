// https://www.spoj.com/PTIT/problems/PTIT135A/
// PTIT135A - Đỗ xe

#include <bits/stdc++.h>
using namespace std;

struct Car
{
    int arrive;
    int leave;
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<Car> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i].arrive >> v[i].leave;
    }
    vector<int> dd(101, 0);
    for (int i = v[0].arrive; i < v[0].leave; i++)
    {
        dd[i]++;
    }
    for (int i = v[1].arrive; i < v[1].leave; i++)
    {
        dd[i]++;
    }
    for (int i = v[2].arrive; i < v[2].leave; i++)
    {
        dd[i]++;
    }
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (dd[i] == 0)
            continue;
        if (dd[i] == 1)
            sum += a;
        else if (dd[i] == 2)
            sum += 2 * b;
        else if (dd[i] == 3)
            sum += 3 * c;
    }
    cout << sum;
    return 0;
}
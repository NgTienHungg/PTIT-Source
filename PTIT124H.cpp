// https://www.spoj.com/PTIT/problems/PTIT124H/
// PTIT124H - Điểm còn lại của hình chữ nhật

#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int x;
    int y;
};

bool cmp(Data a, Data b)
{
    if (a.x > b.x)
        return 0;
    if (a.x == b.x && a.y > b.y)
        return 0;
    return 1;
}

int main()
{
    vector<Data> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i].x >> v[i].y;
    sort(v.begin(), v.end(), cmp);
    if (v[0].x == v[1].x && v[1].y == v[2].y)
        cout << v[2].x << " " << v[0].y;
    else if (v[0].x == v[1].x && v[0].y == v[2].y)
        cout << v[2].x << " " << v[1].y;
    else if (v[0].y == v[1].y && v[1].x == v[2].x)
        cout << v[0].x << " " << v[2].y;
    else if (v[0].y == v[2].y && v[2].x == v[1].x)
        cout << v[0].x << " " << v[1].y;
}
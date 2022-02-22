// https://code.ptit.edu.vn/student/question/CP01009
// SẮP XẾP THEO THỨ TỰ XUẤT HIỆN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Data
{
    int val;
    int cou;
    int pos;
};

bool cmp(Data a, Data b)
{
    if (a.cou > b.cou)
        return 1;
    if (a.cou == b.cou && a.pos < b.pos)
        return 1;
    return 0;
}

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<int, int> mp;
    map<int, int>::iterator it;
    for (int i = 0; i < n; ++i)
        mp[a[i]]++;

    vector<Data> v;
    for (int i = 0; i < n; ++i)
    {
        it = mp.find(a[i]);
        if (it != mp.end())
        {
            Data temp;
            temp.val = (*it).first;
            temp.cou = (*it).second;
            temp.pos = i;
            v.push_back(temp);
            mp.erase(a[i]);
        }
    }

    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 1; j <= v[i].cou; ++j)
            cout << v[i].val << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
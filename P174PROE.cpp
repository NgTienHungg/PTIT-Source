// https://www.spoj.com/PTIT/problems/P174PROE/
// P174PROE - ROUND 4E - Bài toán khó

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    if(s.size()==1 || s.size()==2) {
        cout << "YES";
        return 0;
    }

    if (s.size() != 3)
    {
        cout << "NO";
        return 0;
    }
    
    vector<ll> v(s.begin(), s.end());
    if (v[0] - v[1] == v[1] - v[2])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

//todo Chỉ cần có 3 số khác nhau và tạo thành CSC là t/m
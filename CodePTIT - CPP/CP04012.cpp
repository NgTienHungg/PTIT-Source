// https://code.ptit.edu.vn/student/question/CP04012
// GIÁ TRỊ NHỎ NHẤT CỦA XÂU

#include <bits/stdc++.h>

using namespace std;

void TestCase()
{
    int k;
    string s;
    cin >> k >> s;
 
    int dd[26] = {0};
    for (auto x : s) {
        dd[x - 'A']++;
    }
 
    priority_queue<int> pq;
    for (auto x : dd) {
        pq.push(x);
    }
        
    while (k > 0 && pq.top() != 0) {
        int x = pq.top();
        pq.pop();
        x--, k--;
        pq.push(x);
    }
 
    long long res = 0;
    while (!pq.empty()) {
        int x = pq.top();
        pq.pop();
        res += (long long)x * x;
    }
    cout << res << endl;
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
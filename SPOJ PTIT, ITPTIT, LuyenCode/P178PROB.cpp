// https://www.spoj.com/PTIT/problems/P178PROB/
// P178PROB - ROUND 8B - MISS IT

#include <bits/stdc++.h>
using namespace std;

struct Person
{
    int sbd;
    int sum = 0; // Tổng điểm
    int st1 = 0; // Số lần đứng thứ 1
    int nd2 = 0; // Số lần đứng thứ 2
};

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<Person> v(1e6);
        int maxSBD = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x; // Số ban giám khảo
            for (int j = 1; j <= x; j++)
            {
                int k;
                cin >> k;
                v[k].sbd = k;
                maxSBD = max(maxSBD, k); // Tìm SBD lớn nhất
                if (j == 1)
                {
                    v[k].sum += 3;
                    v[k].st1++;
                }
                else if (j == 2)
                {
                    v[k].sum += 2;
                    v[k].nd2++;
                }
                else if (j == 3)
                    v[k].sum += 1;
            }
        }
        v.resize(maxSBD + 1);
        for (int i = 1; i < maxSBD; i++)
        {
            for (int j = i + 1; j <= maxSBD; j++)
            {
                if (v[j].sum > v[i].sum)
                    swap(v[i], v[j]);
                else if (v[j].sum == v[i].sum)
                {
                    if (v[j].st1 > v[i].st1)
                        swap(v[i], v[j]);
                    else if (v[j].st1 == v[i].st1)
                    {
                        if (v[j].nd2 > v[i].nd2)
                            swap(v[i], v[j]);
                    }
                }
            }
        }
        for (int i = 1; i <= maxSBD; i++)
        {
            if (v[i].sum == v[1].sum && v[i].st1 == v[1].st1 && v[i].nd2 == v[1].nd2)
                cout << v[i].sbd << " ";
            else
                break;
        }
        cout << endl;
    }
    return 0;
}
// https://www.spoj.com/PTIT/problems/P147PROB/
// P147PROB - ROUND 7B - Pha nước cam

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    printf("%.12lf", (double)sum / n);
    return 0;
}
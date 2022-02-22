// https://www.spoj.com/PTIT/problems/BCQUEEN/
// BCQUEEN - N - Queen

#include <bits/stdc++.h>
using namespace std;

int n, res = 0;
bool hang[15] = {0}, cot[15] = {0}, chinh[25] = {0}, phu[25] = {0};

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!hang[j] && !cot[j] && !chinh[i - j + n] && !phu[i + j - 1])
        {
            hang[j] = cot[j] = chinh[i - j + n] = phu[i + j - 1] = 1;
            if (i == n)
                res++;
            else
                Try(i + 1);
            hang[j] = cot[j] = chinh[i - j + n] = phu[i + j - 1] = 0;
        }
    }
}

int main()
{
    cin >> n;
    Try(1);
    cout << res;
    return 0;
}
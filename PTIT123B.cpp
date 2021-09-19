// https://www.spoj.com/PTIT/problems/PTIT123B/
// PTIT123B - Đếm số lần lặp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        printf("Case %d: ", t++);
        bool check = 1;
        for (int i = 1; i < n; i++)
            if (v[i] != v[i - 1])
            {
                check = 0;
                break;
            }
        if (check == 1)
            cout << "0 iterations\n";
        else
        {
            int count = 0;
            int kt;
            for (int k = 1; k <= 1000; k++)
            {
                count++;
                // Thay đổi
                int tg = v[0];
                for (int i = 0; i < n; i++)
                {
                    if (i == (n - 1))
                        v[i] = abs(v[i] - tg);
                    else
                        v[i] = abs(v[i] - v[i + 1]);
                }
                // Kiểm tra
                kt = 1;
                for (int i = 1; i < n; i++)
                {
                    if (v[i] != v[i - 1])
                    {
                        kt = 0;
                        break;
                    }
                }
                if (kt == 1)
                {
                    printf("%d iterations\n", count);
                    break;
                }
            }
            // Sau 1000 lần lặp vẫn k thu đc dãy bằng nhau
            if (kt == 0)
                printf("not attained\n");
        }
    }
    return 0;
}
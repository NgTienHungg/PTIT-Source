// https://www.spoj.com/PTIT/problems/BCOLP10/
// BCOLP10 - Độ đo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int A[26] = {0};
    int B[26] = {0};
    for (int i = 0; i < a.length(); i++)
        A[a[i] - 'a']++;
    for (int i = 0; i < b.length(); i++)
        B[b[i] - 'a']++;
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        count += abs(A[i] - B[i]);
    }
    cout << count;
    return 0;
}
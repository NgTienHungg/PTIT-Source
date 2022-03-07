// https://www.spoj.com/PTIT/problems/PTIT126I/
// PTIT126I - Ô chữ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    int column = A.length();
    int row = B.length();
    int c, r, check = 0;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (A[i] == B[j])
            {
                c = i;
                r = j;
                check = 1;
                break;
            }
        }
        if (check == 1)
            break;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == r)
                cout << A[j];
            else if (j == c)
                cout << B[i];
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}
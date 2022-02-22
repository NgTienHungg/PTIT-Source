// https://luyencode.net/problem/NEXTCHAR
// NEXTCHAR - Ký tự liền sau

#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c == 'z')
        cout << 'a';
    else
        cout << char(c + 1);
    return 0;
}
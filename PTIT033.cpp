// https://luyencode.net/problem/PTIT033
// PTIT033 - Số chia hết hay không?

#include <iostream>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    if (n % a == 0)
    {
        if (n % b == 0)
            cout << "Co, tat ca!";
        else
            cout << "Chi chia het cho " << a << ",";
    }
    else if (n % b == 0)
        cout << "Chi chia het cho " << b << ".";
    else
        cout << "Khong chia het cho so nao ca.";
    return 0;
}
// https://code.itptit.com/problems/100056
// Combat

#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int x;
    int y;
    int z;
};

int main()
{
    Data A, B, C, D;
    cin >> A.x >> A.y >> A.z;
    cin >> B.x >> B.y >> B.z;
    cin >> C.x >> C.y >> C.z;
    cin >> D.x >> D.y >> D.z;

    Data vAB, vAC, vAD; // Vector AB, AC, AD
    vAB.x = B.x - A.x;
    vAB.y = B.y - A.y;
    vAB.z = B.z - A.z;

    vAC.x = C.x - A.x;
    vAC.y = C.y - A.y;
    vAC.z = C.z - A.z;

    vAD.x = D.x - A.x;
    vAD.y = D.y - A.y;
    vAD.z = D.z - A.z;

    Data vAB_vAC; // Tích có hướng của vector [AB,AC]
    vAB_vAC.x = vAB.y * vAC.z - vAB.z * vAC.y;
    vAB_vAC.y = vAB.z * vAC.x - vAB.x * vAC.z;
    vAB_vAC.z = vAB.x * vAC.y - vAB.y * vAC.x;

    int S = vAB_vAC.x * vAD.x + vAB_vAC.y * vAD.y + vAB_vAC.z * vAD.z;
    if (S == 0)
        cout << "Win";
    else
        cout << "Yasuo AFK";
    return 0;
}
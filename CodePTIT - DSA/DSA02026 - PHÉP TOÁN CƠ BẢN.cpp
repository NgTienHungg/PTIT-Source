// https://code.ptit.edu.vn/student/question/DSA02026
// PHÉP TOÁN CƠ BẢN

#include <bits/stdc++.h>
using namespace std;

string str;
int sign[2] = {'+', '-'};
bool isOK;

bool isCorrect() {
    int x = stoi(str.substr(0, 2));
    int y = stoi(str.substr(5, 2));
    int z = stoi(str.substr(10, 2));
    if (x < 10 || y < 10 || z < 10) {
        return false;
    }
    if (str[3] == '+')
        return (x + y == z);
    else
        return (x - y == z);
}

void Try(int i) {
    if (isOK) return;
    if (i == str.length()) {
        if (isCorrect()) {
            isOK = true;
            cout << str << endl;
        }
        return;
    }
    if (str[i] == '?') {
        if (i == 3) {
            for (int j = 0; j <= 1; ++j) {
                str[i] = sign[j];
                Try(i + 1);
            }
        } else {
            for (int j = 0; j <= 9; ++j) {
                str[i] = j + '0';
                Try(i + 1);
            }
        }
        str[i] = '?';
    } else {
        Try(i + 1);
    }
}

void testCase() {
    isOK = false;
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '*' or str[i] == '/') {
            // không tồn tại phép nhân hay chia giữa 2 số có 2 cs mà ra kết quả là 1 số có 2 cs
            cout << "WRONG PROBLEM!";
            return;
        }
    }
    Try(0);
    if (!isOK) {
        cout << "WRONG PROBLEM!";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
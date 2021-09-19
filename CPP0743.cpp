// https://code.ptit.edu.vn/student/question/CPP0743
// ĐẢO TỪ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    stack<string> st;
    string str, s;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> s) {
        st.push(s);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--) TestCase();
    return 0;
}
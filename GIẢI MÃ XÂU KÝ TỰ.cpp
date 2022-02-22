#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    cin >> s;

    stack<string> st;
    stack<int> so;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            so.push(num);
        }
        else if (s[i] == ']') {
            string temp = "";
            while (st.top() != "[") {
                temp = st.top() + temp;
                st.pop();
            }
            st.pop(); // Xóa dấu [
        
            int n = so.top();
            so.pop();
            string dup = "";
            while (n--) {
                dup += temp;
            }
            st.push(dup);
        }
        else {
            string temp = string(1, s[i]);
            st.push(temp);

            if (s[i] == '[' && (i == 0 || s[i - 1] < '0' || s[i - 1] > '9'))
                so.push(1);
        }
    }
    
    string ans = "";
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
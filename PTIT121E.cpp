// https://www.spoj.com/PTIT/problems/PTIT121E/
// PTIT121E - Nguyên tố hóa học

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(0); // Đặt 0 vào để ngăn cách
        else if (s[i] == 'C')
            st.push(12);
        else if (s[i] == 'O')
            st.push(16);
        else if (s[i] == 'H')
            st.push(1);
        // Tính tổng tất cả các giá trị (xóa từng giá trị) từ top() đến khi gặp số 0
        else if (s[i] == ')')
        {
            int tmp = 0;
            while (st.top() != 0)
            {
                tmp += st.top();
                st.pop();
            }
            st.pop();     // Xóa 0
            st.push(tmp); // Thay top() thành tmp
        }
        // Thay top bằng top * s[i]
        else if (s[i] >= '2' && s[i] <= '9')
        {
            int tmp = st.top() * (s[i] - '0');
            st.pop();
            st.push(tmp);
        }
    }
    // Tính tổng tất cả các giá trị trong stack
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}
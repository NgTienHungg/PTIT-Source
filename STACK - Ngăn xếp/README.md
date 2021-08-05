# STACK - Ngăn xếp

## 1. Khái niệm

- _Stack_ là một cấu trúc dữ liệu trừu tượng, dạng thùng chứa (_container_) trong thư viện _STL_.

- Hoạt động theo nguyện lý _"vào sau ra trước"_ __LIFO__ (**L**ast **I**n **F**irst **O**ut).

- Vị trí cuối cùng của stack gọi là đỉnh (_top_)

> VD: Có thể coi _stack_ như 1 băng đạn, mỗi viên đạn là 1 phần tử.
Chỉ có thể lắp thêm đạn vào đầu băng, và mỗi lần bắn cũng sẽ bắn viên đạn trên cùng của băng.

![Imgur](https://i.imgur.com/gUUX9Hg.jpg "Stack")

## 2. Stack trong C++

- Khai báo thư viện: `#include <stack>`

- Khai báo _stack_ kiểu _int_: `stack<int> st;`

- Các hàm thành phần:

    - `st.push(x);` Đẩy phần tử __x__ vào đỉnh của _stack_ __st__. ĐPT O(1).
    
    - `st.emplace(x);` Chèn phần tử __x__ vào đỉnh của _stack_ __st__. ĐPT O(1).
    
    > Sự khác biệt giữa hàm _push()_ và _emplace()_:
    > - Hàm _push()_ chèn một bản sao của giá trị hoặc tham số được truyền đến hàm vào đỉnh của _stack_
    > - Hàm _emplace()_ xây dựng một phần tử mới làm giá trị, sau đó thêm nó vào đỉnh của _stack_.

    - `st.pop();` Loại bỏ phần tử ở đỉnh _stack_ __st__. ĐPT O(1).
    
    - `st.top();` Truy cập đến phần tử ở đỉnh của _stack_ __st__. ĐPT O(1).
    
    - `st.size();` Trả về kích thước hiện tại của _stack_ __st__. ĐPT O(1).
    
    - `st.empty();` Trả về __true (1)__ nếu _stack_ __st__ rỗng, ngược lại trả về __false (0)__. ĐPT O(1).
    
    - `st1.swap(st2);` Hàm này dùng để hoán đổi nội dung của _stack_ __st1__ với _stack_ __st2__ cùng loại (kích thước có thể khác nhau).

- Xem ví dụ sau đây để hiểu rõ hơn:
```C++
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st1;
    for (int i = 1; i <= 5; ++i) st1.push(i); // st1 = {1, 2, 3, 4, 5}
    st1.push(100);                            // st1 = {1, 2, 3, 4, 5, 100}
    st1.emplace(200);                         // st1 = {1, 2, 3, 4, 5, 100, 200}
    st1.pop();                                // st1 = {1, 2, 3, 4, 5, 100}
    cout << st1.top() << endl;                // In ra 100
    cout << st1.size() << endl;               // In ra 6
    cout << st1.empty() << endl;              // In ra 0

    stack<int> st2;
    for (int i = 10; i <= 12; ++i) st2.push(i); // st2 = {10, 11, 12}
    st1.swap(st2); // st1 = {10, 11, 12}
                   // st2 = {1, 2, 3, 4, 5, 100}
    return 0;
}
```

## 3. Bài tập

### 1. [Cấu trúc dữ liệu ngăn xếp (stack) (Cơ bản)](https://www.spoj.com/PTIT/problems/BCSTACK/)

- Bài này sẽ luyện cho bạn các thao tác cài đặt cấu trúc dữ liệu ngăn xếp (stack). Nếu đã cài đặt thành công, hãy tìm hiểu cách sử dụng container stack trong STL và cài đặt nó.

```C++
#include <stdio.h>
#include <string.h>

long long st[1001];
int Top = 0;

void init() {
    Top = 0;
}

void push(long long num) {
    Top++;
    st[Top] = num;
}

void pop() {
    if (Top > 0) Top--;
}

void top() {
    if (Top == 0) printf("-1\n");
    else printf("%lld\n", st[Top]);
}

void size() {
    printf("%d\n", Top);
}

void empty() {
    if (Top == 0) printf("1\n");
    else printf("0\n");
}

int main() {
    char s[1001];
    while (1) {
        scanf("%s", s);
        if (strcmp(s, "end") == 0) break;
        else if (strcmp(s, "init") == 0) init();
        else if (strcmp(s, "push") == 0) {
            long long num;
            scanf("%lld", &num);
            push(num);
        }
        else if (strcmp(s, "pop") == 0) pop();
        else if (strcmp(s, "top") == 0) top();
        else if (strcmp(s, "size") == 0) size();
        else if (strcmp(s, "empty") == 0) empty();
    }
    return 0;
}
```

### 2. [Dấu ngoặc đúng](https://www.spoj.com/PTIT/problems/PTIT123J/)

- __Solution__:

    - Nhập xâu `s`, xóa kí tự `.` cuối xâu rồi xét `s`. Nếu `s` rỗng thì dừng chương trình.

    - Tạo _vector_ kiểu _char_ `v` lưu các dấu ngoặc `(`, `)`, `[` ,`]`, và _stack_ kiểu _char_ `st` để xử lý.

    - Duyệt toàn bộ `v`:
        - __TH1__: Nếu gặp dấu `)` và dấu ngoặc gần nó nhất: `st.top()` là `(` thì đó là 1 cặp ngoặc `()` tương ứng, xóa `(` ở khỏi `st` và tiếp tục duyệt.

        - __TH2__: Tương tự, nếu gặp dấu `]` và dấu ngoặc gần nó nhất là `[` thì đó là 1 cặp ngoặc `[]` tương ứng.

        - Nếu không thuộc __2 TH__ trên thì _push_ dấu ngoặc vào `st`.

    - Sau khi duyệt xong `v`, nhận thấy các cặp ngoặc tương ứng đều đã được xóa hết khỏi `st`. Vậy nếu `st` rỗng thì _Dãy ngoặc đúng_, ngược lại _Dãy ngoặc sai_.

```C++
#include <bits/stdc++.h>
using namespace std;

bool check(char c) {
    if (c == '(' || c == ')' || c == '[' || c == ']') return 1;
    return 0;
}

void solve(string s) {
    vector<char> v;
    for (int i = 0; i < s.length(); ++i) {
        if (check(s[i]))
            v.push_back(s[i]);
    }

    stack<char> st;
    for (int i = 0; i < v.size(); ++i) {
        // Dạng ()
        if (v[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
                continue;
            }
        }
        // Dạng []
        if (v[i] == ']')  {
            if (!st.empty() && st.top() == '[') {
                st.pop();
                continue;
            }
        }
        st.push(v[i]);
    }

    if (st.empty()) cout << "yes\n";
    else cout << "no\n";
}

int main() {
    string s;
    while (1) {
        getline(cin, s);
        s.erase(s.length() - 1, 1);
        if (s == "") break;
        solve(s);
    }
    return 0;
}
```

### 3. [Dãy ngoặc đúng dài nhất](https://www.spoj.com/PTIT/problems/P202PROE/)

- __Solution__:

    - Nhập vào xâu `s`, gọi `n` là chiều dài của xâu.

    - Tạo _stack_ kiểu _int_ `st` để lưu index các dấu ngoặc không tạo thành 1 dãy ngoặc đúng.

    - Sau khi duyệt toàn bộ `s`, khoảng cách giữa 2 index trong `st` chính là độ dài dãy ngoặc đúng ở giữa 2 index đó.

    - Nếu `st` rỗng thì cả `s` là một dãy ngoặc đúng dài nhất (In kết quả và dừng chương trình).

    - Ta lưu các index này từ stack `st` sang 1 vector `v`.

    - Kiểm tra `v`:

        - Nếu `v` không có _index_ `0` (tức là dấu ngoặc đầu tiên của `s` thuộc 1 dãy ngoặc đúng) thì ta thêm vào `v` _index_ `-1` (thay cho dấu ngoặc sai ngay trước dãy ngoặc đúng bắt đầu từ _index_ `0`).

        - Nếu `v` không có _index_ `n-1` (tức là dấu ngoặc cuối cùng của `s` là thuộc 1 dãy ngoặc đúng) thì ta thêm vào `v` _index_ `n` (thay cho dấu ngoặc sai ngay sau dãy ngoặc đúng kết thúc bởi _index_ `n-1`).

    - Sắp xếp lại `v` và duyệt toàn bộ, kiểm tra khoảng cách giữa 2 _index_ liên tiếp trong `v`, khoảng cách lớn nhất chính là độ dài dãy ngoặc dài nhất.

```C++
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    cin >> s;
    int n = s.length();

    stack<int> st;
    for (int i = 0; i < n; ++i) {
        if (st.empty() || s[i] == '(')
            st.push(i);
        else {
            if (s[st.top()] != '(')
                st.push(i);
            else
                st.pop();
        }
    }
    if (st.empty()) {
        cout << n << endl;
        return;
    }

    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    if (v.front() != n - 1)
        v.push_back(n);
    if (v.back() != 0)
        v.push_back(-1);
    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        res = max(res, v[i] - v[i - 1] - 1);
    }
    cout << res << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
```

### 4.  [Nguyên tố hóa học](https://www.spoj.com/PTIT/problems/PTIT121E/)

- __Solution__:
    
    - Nhập vào xâu `s`, tạo 1 _stack int_ `st` để lưu các giá trị.
    
    - Push các giá trị tương ứng với các nguyên tố `H` = `1`, `C` = `12`, `O` = `16`.
    
    - Nếu gặp một số `k` thuộc [2, 9], ta nhân `k` với giá trị `top`.

    - Nếu gặp dấu `(` thì _push_ vào giá trị `0` để chặn đầu, tiếp tục xử lý, đến khi gặp dấu `)` thì cộng dồn các giá trị trong ngoặc và thay thế cho giá trị `0`.

    - Sau khi duyệt xong toàn bộ xâu `s`, cộng dồn toàn bộ `st`, kết quả là tổng PTK của nguyên tố hóa học.

```C++
#include <bits/stdc++.h>
using namespace std;

int value(char c) {
    if (c == 'H') return 1;
    if (c == 'C') return 12;
    if (c == 'O') return 16;
}

int main() {
    string s;
    cin >> s;

    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'H' || s[i] == 'C' || s[i] == 'O') {
            st.push(value(s[i]));
        }
        else if (s[i] >= '2' && s[i] <= '9') {
            int k = s[i] - '0';
            st.top() = k * st.top();
        }
        else if (s[i] == '(') {
            st.push(0);
        }
        else if (s[i] == ')') {
            int sum = 0;
            while (st.top() != 0) {
                sum += st.top();
                st.pop();
            }
            st.top() = sum;
        }
    }

    int res = 0;
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
    return 0;
}
```
### 5. Các bài tập khác

- [Truy vấn với ngăn xếp](https://luyencode.net/problem/STACK)

- [Đổi hệ thập phân sang nhị phân](https://luyencode.net/problem/DEC2BIN)

- [Liệt kê cặp ngoặc](https://luyencode.net/problem/LKNGOAC)

- [Truy vấn trung vị](https://luyencode.net/problem/MEDIAN)

- [Cuộc diễu hành đường phố](https://luyencode.net/problem/STPARA)

- [Khối lượng phân tử](https://luyencode.net/problem/STMASS)
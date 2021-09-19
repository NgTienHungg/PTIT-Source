# STACK - Ngăn xếp

## 1. Khái niệm

- _Stack_ là một cấu trúc dữ liệu trừu tượng, dạng thùng chứa (_container_) trong thư viện _STL_.

- Hoạt động theo nguyện lý _"vào sau ra trước"_ - **LIFO** (**L**ast **I**n **F**irst **O**ut).

- Vị trí cuối cùng của stack gọi là đỉnh (_top_)

> VD: Có thể coi stack như 1 băng đạn, mỗi viên đạn là 1 phần tử.
> Chỉ có thể lắp thêm đạn vào đầu băng, và mỗi lần bắn cũng sẽ bắn viên đạn trên cùng của băng.

![Imgur](https://i.imgur.com/gUUX9Hg.jpg)

## 2. Stack trong C++

- Khai báo thư viện: `#include <stack>`

- Khai báo _stack_ kiểu _int_: `stack<int> st;`

- Các hàm thành phần:

  - `st.push(x);` Đẩy phần tử _x_ vào đỉnh của _stack_. ĐPT O(1).

  - `st.emplace(x);` (C++11) Chèn phần tử _x_ vào đỉnh của _stack_. ĐPT O(1).

  > Sự khác biệt giữa hàm _push()_ và _emplace()_:
  >
  > - Hàm _push()_ chèn một bản sao của giá trị hoặc tham số được truyền đến hàm vào đỉnh của _stack_
  > - Hàm _emplace()_ xây dựng một phần tử mới làm giá trị, sau đó thêm nó vào đỉnh của _stack_.

  - `st.pop();` Loại bỏ phần tử ở đỉnh _stack_. ĐPT O(1).

  - `st.top();` Truy cập đến phần tử ở đỉnh của _stack_. ĐPT O(1).

  - `st.size();` Trả về kích thước hiện tại của _stack_. ĐPT O(1).

  - `st.empty();` Trả về _true_ hoặc _1_ nếu _stack_ rỗng, ngược lại trả về _false_ hoặc _0_. ĐPT O(1).

  - `st1.swap(st2);` (C++11) Hàm này dùng để hoán đổi nội dung của 2 _stack_ cùng loại (kích thước có thể khác nhau).

- Xem ví dụ sau đây để hiểu rõ hơn:

```C++
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st1;                           // st1 = {}
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

- Ứng dụng của stack:

  - Đảo ngược một mảng (hoặc 1 xâu): Đưa lần lượt cho đến hết từng phần tử vào _stack_, sau đó lấy từng phần tử ra cho đến khi _stack_ rỗng, ta được một mảng đã đảo ngược.

  - Chuyển đổi hệ thập phân sang các hệ cơ số khác: Thực hiện chia số (thập phân) cho cơ số đến khi số đó bằng 0, kết quả số dư của các phép chia được đẩy vào _stack_. Lấy từng kết quả đó ra cho đến khi _stack_ rỗng, thu được số trong hệ cơ số mới.

  - Tính toán biểu thức đại số, chuyển đổi biểu thức giữa các dạng tiền tố - trung tố - hậu tố.

  - Khử đệ quy trong các bài toán đồ thị (DFS).

## 3. Bài tập điển hình

### 1. [Cấu trúc dữ liệu ngăn xếp (stack) (Cơ bản)](https://www.spoj.com/PTIT/problems/BCSTACK/)

- Bài này sẽ luyện cho bạn các thao tác cài đặt cấu trúc dữ liệu ngăn xếp (stack). Nếu đã cài đặt thành công, hãy tìm hiểu cách sử dụng container stack trong STL và cài đặt nó.

```C++
#include <stdio.h>
#include <string.h>

struct STACK
{
    int st[1001];
    int Top;

    void init() {
        Top = 0;
    }

    void push(int num) {
        Top++;
        st[Top] = num;
    }

    void pop() {
        if (Top > 0)
            Top--;
    }

    void top() {
        if (Top == 0)
            printf("-1\n");
        else
            printf("%d\n", st[Top]);
    }

    void size() {
        printf("%d\n", Top);
    }

    void empty() {
        if (Top == 0)
            printf("1\n");
        else
            printf("0\n");
    }
};

int main()
{
    struct STACK Stack;
    while (true) {
        char s[1001];
        scanf("%s", s);
        if (strcmp(s, "end") == 0)
            break;
        else if (strcmp(s, "init") == 0)
            Stack.init();
        else if (strcmp(s, "push") == 0) {
            int num;
            scanf("%d", &num);
            Stack.push(num);
        }
        else if (strcmp(s, "pop") == 0)
            Stack.pop();
        else if (strcmp(s, "top") == 0)
            Stack.top();
        else if (strcmp(s, "size") == 0)
            Stack.size();
        else if (strcmp(s, "empty") == 0)
            Stack.empty();
    }
    return 0;
}
```

### 2. [Dấu ngoặc đúng](https://www.spoj.com/PTIT/problems/PTIT123J/)

- **Solution**:

  - Nhập xâu `s`, xóa kí tự `.` cuối xâu rồi xét `s`. Nếu `s` rỗng thì dừng chương trình.

  - Tạo _vector char_ `v` lưu các dấu ngoặc `(`, `)`, `[` ,`]`, và _stack char_ `st` để xử lý.

  - Duyệt toàn bộ `v`:

    - **TH1**: Nếu gặp dấu `)` và dấu ngoặc gần nó nhất: `st.top()` là `(` thì đó là 1 cặp ngoặc `()` tương ứng, xóa `(` ở khỏi `st` và tiếp tục duyệt `v`.

    - **TH2**: Tương tự, nếu gặp dấu `]` và dấu ngoặc gần nó nhất là `[` thì đó là 1 cặp ngoặc `[]` tương ứng.

    - Nếu không thuộc **2 TH** trên thì _push_ dấu ngoặc vào `st`.

  - Sau khi duyệt xong `v`, nhận thấy các cặp ngoặc tương ứng đều đã được xóa hết khỏi `st`. Vậy nếu `st` rỗng thì _Dãy ngoặc đúng_, ngược lại _Dãy ngoặc sai_.

```C++
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool check(char c)
{
    if (c == '(' || c == ')' || c == '[' || c == ']')
        return true;
    return false;
}

void solve(string s)
{
    vector<char> v; // Vector lưu các dấu ngoặc
    for (int i = 0; i < s.length(); ++i) {
        if (check(s[i])) {
            v.push_back(s[i]);
        }
    }

    stack<char> st; // Stack lưu các dấu ngoặc sai
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

    if (st.empty())
        cout << "yes\n";
    else
        cout << "no\n";
}

int main()
{
    while (true) {
        string s;
        getline(cin, s);
        s.pop_back(); // Xóa dấu . cuối xâu s
        if (s.empty())
            break;
        solve(s);
    }
    return 0;
}
```

### 3. [Dãy ngoặc đúng dài nhất](https://www.spoj.com/PTIT/problems/P202PROE/)

- **Solution**:

  - Nhập vào xâu `s`, gọi `n` là chiều dài của xâu.

  - Tạo _stack int_ `st` để lưu _index_ các dấu ngoặc không tạo thành 1 dãy ngoặc đúng.

  - Sau khi duyệt toàn bộ `s`, khoảng cách giữa 2 _index_ trong `st` chính là độ dài dãy ngoặc đúng ở giữa 2 _index_ đó.

  - Nếu `st` rỗng thì cả `s` là một dãy ngoặc đúng dài nhất (In kết quả và dừng chương trình).

  - Ta lưu các _index_ này từ stack `st` sang 1 _vector_ `v`.

  - Kiểm tra `v`:

    - Nếu `v` không có _index_ `0` (tức là dấu ngoặc đầu tiên của `s` thuộc 1 dãy ngoặc đúng) thì ta thêm vào `v` _index_ `-1` (thay cho dấu ngoặc sai ngay trước dãy ngoặc đúng bắt đầu từ _index_ `0`).

    - Nếu `v` không có _index_ `n-1` (tức là dấu ngoặc cuối cùng của `s` là thuộc 1 dãy ngoặc đúng) thì ta thêm vào `v` _index_ `n` (thay cho dấu ngoặc sai ngay sau dãy ngoặc đúng kết thúc bởi _index_ `n-1`).

  - Sắp xếp lại `v` và duyệt toàn bộ, kiểm tra khoảng cách giữa 2 _index_ liên tiếp trong `v`, khoảng cách lớn nhất chính là độ dài dãy ngoặc đúng dài nhất.

```C++
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int n = s.length();

    stack<int> st; // Stack lưu index của dấu ngoặc sai ngay trước và ngay sau 1 dãy ngoặc đúng
    for (int i = 0; i < n; ++i) {
        if (st.empty() || s[i] == '(') {
            st.push(i);
        }
        else if (s[i] == ')') {
            if (s[st.top()] != '(')
                st.push(i);
            else
                st.pop();
        }
    }

    // TH cả xâu s là một dãy ngoặc đúng
    if (st.empty()) {
        cout << n << endl;
        return;
    }

    vector<int> v; // Vector lưu index của các dấu ngoặc sai
    // Lấy dữ liệu từ stack sang vector
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }

    // Nếu dấu ngoặc cuối cùng trong s thuộc 1 dãy ngoặc đúng
    if (v.front() != n - 1) {
        v.push_back(n);
    }

    // Nếu dấu ngoặc đầu tiên trong s thuộc 1 dãy ngoặc đúng
    if (v.back() != 0) {
        v.push_back(-1);
    }

    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        res = max(res, v[i] - v[i - 1] - 1);
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
```

### 4. [Nguyên tố hóa học](https://www.spoj.com/PTIT/problems/PTIT121E/)

- **Solution**:

  - Nhập vào xâu `s`, tạo 1 _stack int_ `st` để lưu các giá trị.

  - Push các giá trị tương ứng với các nguyên tố `H` = `1`, `C` = `12`, `O` = `16`.

  - Nếu gặp một số `k` thuộc [2, 9], ta nhân `k` với giá trị `top`.

  - Nếu gặp dấu `(` thì _push_ vào giá trị `0` để chặn đầu (đánh dấu), tiếp tục xử lý, đến khi gặp dấu `)` thì cộng dồn các giá trị trong cặp ngoặc này và thay thế cho giá trị `0`.

  - Sau khi duyệt xong toàn bộ xâu `s`, cộng dồn toàn bộ `st`, kết quả là tổng PTK của nguyên tố hóa học.

```C++
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int value(char c)
{
    if (c == 'H') return 1;
    if (c == 'C') return 12;
    if (c == 'O') return 16;
}

int main()
{
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

### 5. [Biểu thức hậu tố](https://www.spoj.com/PTIT/problems/SSAM219E/)

- Solution:

  - Nhập vào xâu `s`.

  - Tạo 1 _stack char_ `st` lưu các toán tử (dấu phép tính) và các dấu ngoặc.

  - Duyệt toàn bộ xâu `s`:

    - Nếu gặp toán hạng (A...Z, a...z) thì in ra luôn.

    - Nếu gặp dấu `(`, ta lưu vào stack `st` để chặn đầu, lát sau nếu có gặp `)` thì ta sẽ ưu tiên xử lý biểu thức trong cặp ngoặc này trước.

    - Nếu gặp dấu `)`, ta sẽ xử lý biểu thức trong ngoặc `()`. Khi mà còn chưa gặp dấu `(` thì cứ lấy ra các toán tử trong stack (chính là các phép toán trong cặp ngoặc này). Giờ xóa luôn dấu `(` ra khỏi _stack_ vì biểu thức trong ngoặc này đã được xử lý xong.

    - Nếu gặp toán tử (+, -, \*, /, ^), kiểm tra xem trong _stack_ có các phép toán nào có độ ưu tiên cao hơn không, nếu có thì ưu tiên in ra các phép toán đó trước. Sau khi đã thực hiện các phép toán có độ ưu tiên lớn hơn hoặc bằng phép toán đang xét `s[i]`, đẩy s[i] vào _stack_.

      > Độ ưu tiên của các toán tử như sau:
      > Lũy thừa: ^
      > Nhân chia: \* /
      > Cộng trừ: + -
      > Các dấu ngoặc: ( )

  - Sau khi duyệt xong `s`, ta lần lượt lấy ra các toán tử còn lại trong _stack_ cho đến khi _stack_ rỗng.

```C++
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int priority(char c)
{
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0; // Dấu ngoặc
}

void TestCase()
{
    string s;
    cin >> s;

    stack<char> st; // Stack lưu các dấu () và các phép tính +, -, *, /, ^
    for (int i = 0; i < s.length(); ++i) {
        // Nếu s[i] là toán hạng thì in ra
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << s[i];

        // Nếu s[i] là '(' thì đẩy vào stack chặn đầu, xử lý các phép toán trong ngoặc trước
        else if (s[i] == '(')
            st.push(s[i]);

        // Nếu s[i]  là ')' thì bắt đầu xử lý biểu thức trong ngoặc
        else if (s[i] == ')') {
            // Khi mà còn chưa duyệt đến dấu '(' thì in ra các toán tử
            while (st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            st.pop(); // Xóa dấu '('
        }

        // Nếu s[i] là toán tử, ta thực hiện các phép toán có độ ưu tiên hơn trước
        else {
            while (!st.empty() && priority(st.top()) >= priority(s[i])) {
                cout << st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // In ra các phép toán còn lại
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
```

### 6. [Bán dừa](https://vn.spoj.com/problems/KPLANK/)

- Idea:

  - Xét từng tấm ván, coi tấm ván đang xét là tấm ván có chiều cao thấp nhất trong mảng ván ghép được, vậy ta cần tìm các tấm ván liên tiếp bên trái và phải tấm hiện tại, có chiều cao >= chiều cao của tấm hiện tại. Như thế có thể cắt được các tấm ván thành hình vuông, diện tích thì phụ thuộc vào chiều cao của tấm ván thấp nhất trong mảng đó (chính là tấm ván đang xét, vì ta đã giả thiết vậy).

  - Xét tấm ván thứ i, sử dụng kĩ thuật _stack đơn điệu_ tìm ra vị trí của tấm ván xa i nhất phía bên trái, t/m các tấm ván từ vị trí đó tới i đều có chiều cao >= chiều cao tấm ván i. (Vì coi i là tấm ván thấp nhất và sẽ cưa theo chiều cao của tấm ván i). Lưu vị trí vừa tìm được vào 1 mảng ứng với i.

  - Tương tự cũng làm được 1 mảng lưu vị trí xa nhất bên phải i, t/m các tấm ván ở giữa i và vị trí đó có chiều cao >= chiều cao tấm ván i.

  - Khoảng cách từ tấm xa nhất bên trái đến tấm xa nhất bên phải (ứng với i đang xét) chính là chiều dài của mảng ván ta có thể ghép. Nhưng vì đề bài y/c cưa mảng ván theo 1 tấm ván nào đó nên khoảng cách này cần t/m >= chiều cao của tấm ván i đang xét vì ta sẽ cưa mảng này theo tấm ván i.

  - Tham khảo kĩ thuật stack đơn điệu tại: [vnoi](https://vnoi.info/wiki/algo/data-structures/deque-min-max)

- Solution:

  - Nhập `n`, _vector int_ `v` lưu các phần tử.

  - Có _vector_ `L`, tại vị trí thứ _i_ lưu _index_ của phần tử xa _i_ nhất về bên trái trong `v`, có giá trị `v[index]` >= `v[i]`, và `v[i]` có giá trị nhỏ nhất trong đoạn [_index, i_].

  - Và _vector_ `R` thì lưu _index_ của phần tử xa _i_ nhất về bên phải, có giá trị >= `v[i]`.

  - Sử dụng _stack_ `a`, `b` để lưu lại các vị trí làm thay đổi _index_ của giá trị _min_ khi xét từng _i_.

  - Việc xử lý của _stack_ `a` và _vector_ `L` tương tự _stack_ `b` và _vector_ `R`, có 1 vài bước thay đổi khác nhau 1 chút.

  - Duyệt từ _i_ đến _n_, thao tác với _stack_ `a` và _vector_ `L`:

    - Nếu _stack_ không rỗng và phần tử với _index_ là đỉnh _stack_ `v[a.top()]` có giá trị >= `v[i]`, nghĩa là `v[i]` vẫn đang còn là _min_ trong đoạn [_a.top(), i_], nên ta loại _index_ này ra khỏi _stack_.

    - Làm thế cho đến khi:

      - _Stack_ rỗng: Nghĩa là tính từ đầu dãy lại, không có vị trí nào nhỏ hơn `v[i]`, vậy phần tử bên trái cùng >= `v[i]` có _index_ = 0;
        => `L[i]` = 0.

      - Ngược lại nếu _stack_ còn phần tử, vậy thì đỉnh của _stack_ hiện tại là vị trí gần nhất bên trái _i_ có giá trị < `v[i]`. Nên _index + 1_ sẽ là vị trí bên trái _i_ nhất có giá trị >= `v[i]`
        => `L[i]` = `a.top()` + 1.

    - Giờ ta _push i_ đang xét vào _stack_.

    > Mục đích của việc này là nếu không push i hiện tại vào stack, mà khi duyệt i+1 tiếp theo, index ta vừa tìm và lưu ở đỉnh stack có thể không còn t/m là vị trí gần nhất bên trái i+1 có giá trị < v[i+1] nữa, mà lại chính là i, nên ta cần push thêm i hiện tại vào stack, để làm index có giá trị nhỏ thứ hai trong khoảng [index, i].

    - Tương tự xử lý với _vector_ `R`.

    - Giờ tạo 1 biến `res` lưu kết quả, duyệt từ _0_ tới _n_, nếu tấm gỗ t/m chiều cao (`v[i]`) <= độ dài đoạn liền kề có các tấm gỗ >= `v[i]` (`R[i] - L[i] + 1`) thì so sánh và cập nhật `res`.

```C++
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> L(n), R(n);
    stack<int> a, b;

    for (int i = 0; i < n; ++i) {
        while (!a.empty() && v[a.top()] >= v[i])
            a.pop();

        if (a.empty())
            L[i] = 0;
        else
            L[i] = a.top() + 1;

        a.push(i);
    }

    for (int i = n - 1; i >= 0; --i) {
        while (!b.empty() && v[b.top()] >= v[i])
            b.pop();

        if (b.empty())
            R[i] = n - 1;
        else
            R[i] = b.top() - 1;

        b.push(i);
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (R[i] - L[i] + 1 >= v[i])
            res = max(res, v[i]);
    }
    cout << res;
    return 0;
}
```

### 7. Các bài tập khác

- [Truy vấn với ngăn xếp](https://luyencode.net/problem/STACK)

- [Đổi hệ thập phân sang nhị phân](https://luyencode.net/problem/DEC2BIN)

- [Liệt kê cặp ngoặc](https://luyencode.net/problem/LKNGOAC)

- [Truy vấn trung vị](https://luyencode.net/problem/MEDIAN)

- [Cuộc diễu hành đường phố](https://luyencode.net/problem/STPARA)

- [Khối lượng phân tử](https://luyencode.net/problem/STMASS)

- [Biểu thức hậu tố](https://www.spoj.com/PTIT/problems/SSAM219E/)

// https://code.ptit.edu.vn/student/question/CPP0516
// SẮP XẾP DANH SÁCH MẶT HÀNG

#include <bits/stdc++.h>
using namespace std;

struct Product
{
    int id;
    string name, type;
    float buy, sell, profit;

    void input() {
        scanf("\n");
        getline(cin, name);
        getline(cin, type);
        cin >> buy >> sell;
        profit = sell - buy;
    }

    void output() {
        cout << id << " " << name << " " << type << " ";
        cout << fixed << setprecision(2) << profit << endl;
    }
};

bool cmp(Product a, Product b)
{
    return a.profit > b.profit;
}

int main()
{
    int n;
    cin >> n;
    Product a[n];
    for (int i = 0; i < n; ++i) {
        a[i].id = i + 1;
        a[i].input();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        a[i].output();
    }
    return 0;
}
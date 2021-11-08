#include <bits/stdc++.h>
using namespace std;

int n, k, a[20];
bool stop;

void print() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i == n) {
            if (k == 1 && !stop) {
                print();
                stop = 1;
                return;
            }
            k--;
        }
        else Try(i + 1);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    Try(1);
    return 0;
}
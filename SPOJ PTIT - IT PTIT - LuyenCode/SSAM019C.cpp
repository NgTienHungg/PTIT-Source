// https://www.spoj.com/PTIT/problems/SSAM019C/
// SSAM019C - TẬP QUÂN SỰ

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[25], b[25];
    bool dd1[25]={0}, dd2[25]={0};
    for(int i=1; i<=k; i++) {
        cin >> a[i];
    }
    int i=k;
    while(i>0 && a[i]==n-k+i) {
        i--;
    }
    if(i==0) {
        cout << k << endl;
        return;
    } else {
        for(int j=i; j<=k; j++) {
            if(j==i) b[j]=a[i]+1;
            else b[j]=b[j-1]+1;
        }
        for(int j=i; j<=k; j++) {
            dd1[a[j]]=1;
            dd2[b[j]]=1;
        }
        int d=0;
        for(int j=1; j<=20; j++) {
            if(dd1[j] && !dd2[j]) d++;
        }
        cout << d << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0603
// KHAI BÁO LỚP SINH VIÊN - 3

#include <bits/stdc++.h>
#define a() a
using namespace std;

string chuanHoa(string str) {
    string s, res = "";
    stringstream ss(str);
    while (ss >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        res += s + " ";
    }
    res.pop_back();
    return res;
}

class SinhVien {
public:
    string msv, ten, lop, nsinh;
    float gpa;

    friend istream &operator >> (istream &is, SinhVien &a) {
        a.msv = "B20DCCN001";
        getline(cin, a.ten);
        cin >> a.lop >> a.nsinh >> a.gpa;

        a.ten = chuanHoa(a.ten);
        if (a.nsinh[2] != '/') a.nsinh.insert(0, "0");
        if (a.nsinh[5] != '/') a.nsinh.insert(3, "0");
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.nsinh << " ";
        cout << fixed << setprecision(2) << a.gpa;
        return os;
    }
};

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
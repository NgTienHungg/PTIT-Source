// https://code.ptit.edu.vn/student/question/CPP0612
// DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 2

#include <bits/stdc++.h>
using namespace std;

int id = 1;

class SinhVien {
public:
    string msv, ten, lop, nsinh;
    float gpa;

    friend istream &operator >> (istream &is, SinhVien &a) {
        is.ignore();
        getline(is, a.ten);
        is >> a.lop >> a.nsinh >> a.gpa;

        // Chuẩn hóa họ tên
        string str = "", temp;
        stringstream ss(a.ten);
        while (ss >> temp) {
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            temp[0] = toupper(temp[0]);
            str += temp + " ";
        }
        str.pop_back();
        a.ten = str;

        // Chuẩn hóa msv
        string s = to_string(id++);
        while (s.length() < 3)
            s = '0' + s;
        a.msv = "B20DCCN" + s;

        // Chuẩn hóa ngày sinh
        if (a.nsinh[2] != '/') a.nsinh.insert(0, "0");
        if (a.nsinh[5] != '/') a.nsinh.insert(3, "0");
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        os << a.msv << " " << a.ten << " " << a.lop << " " << a.nsinh << " ";
        os << fixed << setprecision(2) << a.gpa << "\n";
        return os;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
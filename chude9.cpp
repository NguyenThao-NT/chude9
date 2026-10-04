#include <iostream>
#include <string>
using namespace std;

//==================================================
// LOP TAI KHOAN
//==================================================

class TaiKhoan {
private:
    string soTK;
    string hoTen;
    string loaiTK;
    long long soDu;
    double laiSuat;

public:
    // Ham tao
    TaiKhoan();

    // Cac ham thanh vien
    void nhap();
    void xuat();

    // Ham lay du lieu
    string getSoTK();
    long long getSoDu();

    // Cac phuong thuc theo de bai
    void napTien(long long tien);
    void rutTien(long long tien);
    double tinhLai();
};


//==================================================
// DINH NGHIA LOP TAI KHOAN
//==================================================

// Ham tao
TaiKhoan::TaiKhoan() {
    soTK = "";
    hoTen = "";
    loaiTK = "";
    soDu = 0;
    laiSuat = 0;
}


// Nhap thong tin tai khoan
void TaiKhoan::nhap() {
    cin.ignore();

    cout << "So tai khoan: ";
    getline(cin, soTK);

    cout << "Ho ten chu tai khoan: ";
    getline(cin, hoTen);

    cout << "Loai tai khoan: ";
    getline(cin, loaiTK);

    cout << "So du hien tai: ";
    cin >> soDu;

    cout << "Lai suat (%): ";
    cin >> laiSuat;
}


// Xuat thong tin tai khoan
void TaiKhoan::xuat() {
    cout << "So tai khoan: " << soTK << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Loai tai khoan: " << loaiTK << endl;
    cout << "So du: " << soDu << endl;
    cout << "Lai suat: " << laiSuat << "%" << endl;
}


// Lay so tai khoan
string TaiKhoan::getSoTK() {
    return soTK;
}


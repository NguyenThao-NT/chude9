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

long long TaiKhoan::getSoDu() {
    return soDu;
}

// Nap tien vao tai khoan
void TaiKhoan::napTien(long long tien) {
    if (tien > 0) {
        soDu += tien;
        cout << "=> Nap tien thanh cong! So du hien tai: " << soDu << endl;
    } else {
        cout << "=> Loi: So tien nap phai lon hon 0!" << endl;
    }
}

// Rut tien khoi tai khoan
void TaiKhoan::rutTien(long long tien) {
    if (tien <= 0) {
        cout << "=> Loi: So tien rut phai lon hon 0!" << endl;
    } else if (tien > soDu) {
        cout << "=> Loi: So du khong du de thuc hien giao dich!" << endl;
    } else {
        soDu -= tien;
        cout << "=> Rut tien thanh cong! So du hien tai: " << soDu << endl;
    }
}

// Tinh lai (Gia su tinh lai cho 1 ky han)
double TaiKhoan::tinhLai() {
    // Lai suat duoc tinh theo phan tram, nen can chia cho 100
    double tienLai = soDu * (laiSuat / 100.0);
    return tienLai;
}
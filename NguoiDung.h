#pragma once
#include "Header.h"
struct ChucVu{
	int admin;
	int thuthu;
	int docgia;
};
class NguoiDung {
private:
public:
	char ID[13];
	char sCMND[13];
	char tenNguoiDung[30];
	char ngaySinh[15];
	char diaChi[50];
	char tenDangNhap[30];
	char MatKhau[20];
	bool trangThai = 1;
	ChucVu chucVu;
	int dem = 0;
	void doc(fstream&);
	void ghi(fstream&);
	void nhap();
};
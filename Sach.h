#pragma once
#include "Header.h"
class Sach {
public:
	char ID[13];
	char tensach[30];
	char tentacgia[30];
	char ngonngu[20];
	char theloai[20];
	int trangthai = 1;//chua muon
	float danhgia = 0; // thang 10, bang tong diem danh gia chia so luot danh gia;
	int soluotdanhgia = 0;
	int soluong = 0;
	void doc(fstream&);
	void ghi(fstream&);
	void nhap();
};
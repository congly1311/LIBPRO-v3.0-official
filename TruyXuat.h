#pragma once
#include "YeuCau.h"
#include "ThongBao.h"
#include "Header.h"
#include "Quyen.h"
#include "Sach.h"
#include "MuonSach.h"
#include "NguoiDung.h"
#include "LichSu.h"
#pragma warning(disable:4996)
int TruyXuatYeuCau(YeuCau v[]) {
	fstream inFile("YeuCau.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	inFile.close();
	return dem - 1;
}
int TruyXuatLichSu(LichSu v[]) {
	fstream inFile("LichSu.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	inFile.close();
	return dem - 1;
}
char gettime() {
	time_t rawtime;
	struct tm *info;
	char buffer[50];

	time(&rawtime);

	info = localtime(&rawtime);

	strftime(buffer, 80, "%x - %I:%M%p", info);
	return buffer[50];
}
int TruyXuatNgDung(NguoiDung v[]) {
	fstream inFile("UserData.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	/*
	for (int i=0; i<dem-1; i++){
	cout << "sCMND: " << v[i].sCMND << endl;
	cout << "tenNguoiDung: " << v[i].tenNguoiDung << endl;
	cout << "ngaySinh: " << v[i].ngaySinh << endl;
	cout << "diaChi: " << v[i].diaChi << endl;
	cout << "Ten Tai khoan: " << v[i].tenDangNhap <<endl;
	cout << "Chuc vu: ";
	if (v[i].chucVu == 1) cout << "Administration" <<endl;
	else if (v[i].chucVu == 2) cout << "Thu Thu" << endl;
	else cout << "Doc Gia" << endl;
	}
	*/
	inFile.close();
	return dem - 1;
}
int TruyXuatSach(Sach v[]) {
	fstream inFile("Sach.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	inFile.close();
	return dem - 1;
}
int TruyXuatMuonSach(MuonSach v[]) {
	fstream inFile("MuonSach.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	inFile.close();
	return dem - 1;
}
int TruyXuatThongBao(ThongBao v[]) {
	fstream inFile("ThongBao.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	inFile.close();
	return dem - 1;
}
int TruyXuatQuyen(Quyen v[]) {
	fstream inFile("Quyen.DAT", ios::in);
	int dem = 0;
	while (!inFile.eof()) {
		v[dem].doc(inFile);
		dem++;
	}
	inFile.close();
	return dem - 1;
}
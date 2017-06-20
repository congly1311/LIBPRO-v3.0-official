#pragma once
#include "Header.h"
class MuonSach {
public:
	int ID;
	char IDsach[13];
	char tensach[30];
	char tentacgia[30];
	char ngonngu[20];
	char theloai[20];
	int trangthai = 1;//chua muon
	float danhgia = 0; // thang 10, bang tong diem danh gia chia so luot danh gia;

	char IDmuon[13];
	char ngMuon[30];
	int ngayMuon[3]; // dinh dang ngay thang nam.
	int thoigian[3]; //dinh dang gio phu giay
	int ngayTra[3];
	void doc(fstream&);
	void ghi(fstream&);
};
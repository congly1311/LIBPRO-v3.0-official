#pragma once
#include "NguoiDung.h"
#include "MuonSach.h"
#include "TruyXuat.h"
void inmuonsach(NguoiDung ngDung[], MuonSach muonsach[], int hientai, int tt){
	int sl = TruyXuatMuonSach(muonsach);
	cout << "____________________________________________________________________________________________________________________________________________________________" << endl;
	cout << setw(10) << left << "|Ms Muon" << setw(15) << left << "|Ma So Sach"
		<< setw(30) << left << "|Ten Sach" << setw(20) << left << "|Ten tac gia"
		<< setw(20) << left << "|Ngon ngu" << setw(20) << left << "|The loai"
		<< setw(20) << left << "|Ngay muon" << setw(20) << left << "|Ngay Tra" << "|" << endl;
	for (int i = 0; i < sl; i++) {
		if (strcmp(muonsach[i].IDmuon, ngDung[hientai].sCMND) == 0) {
			if (muonsach[i].trangthai == tt) {
				cout << "|" << setw(9) << left << muonsach[i].ID << "|" << setw(14) << left << muonsach[i].IDsach
					<< "|" << setw(29) << left << muonsach[i].tensach << "|" << setw(19) << left << muonsach[i].tentacgia
					<< "|" << setw(19) << left << muonsach[i].ngonngu << "|" << setw(19) << left << muonsach[i].theloai
					<< "|" << setw(11) << right << muonsach[i].ngayMuon[0] << "/" << setw(2) << right << muonsach[i].ngayMuon[1] << "/" << muonsach[i].ngayMuon[2]
					<< "|" << setw(11) << right << muonsach[i].ngayTra[0] << "/" << setw(2) << right << muonsach[i].ngayTra[1] << "/" << muonsach[i].ngayTra[2] << "|" << endl;
			}
		}
	}
	cout << "|_________|______________|_____________________________|___________________|___________________|___________________|___________________|___________________|" << endl;
	cout << endl;
}
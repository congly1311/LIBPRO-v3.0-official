#pragma once
#include "ThongBao.h"
#include "Header.h"
#include "MuonSach.h"
#include "NguoiDung.h"
#include "TruyXuat.h"
#include "ThongBaoTuDong.h"
#include "GhiLichSu.h"
int khoanguoidung(NguoiDung ngDung[], int n){
	system("cls");
	int m = TruyXuatNgDung(ngDung);
	if (n == 1){
		cout << " ________________________________________" << endl;
		cout << "|              KHOA NGUOI DUNG           |" << endl;
		cout << "|________________________________________|" << endl;
		char cm[13];
		int i;
		int tt = 0;
		
		cout << "Nhap so CMND: "; cin.getline(cm, 13);
		for (i = 0; i < m; i++) {
			if (strcmp(cm, ngDung[i].sCMND) == 0) {
				ngDung[i].trangThai = 0;
				cout << "\n";
				cout << "Khoa thanh cong!" << endl;
				tt = 1;
				break;
			}
		}
		fstream outFile("UserData.DAT", ios::out);
		for (int k = 0; k < m; k++) {
			ngDung[k].ghi(outFile);
		}
		
		if (tt == 0) cout << "Khong tim thay nguoi nay!" << endl;
		outFile.close();
		Sleep(1311);
		return i;
	}
	else {
		cout << " ________________________________________" << endl;
		cout << "|           MO KHOA NGUOI DUNG           |" << endl;
		cout << "|________________________________________|" << endl;
		char cm[13];
		int i;
		int tt = 0;
		cout << "Nhap so CMND: "; cin >> cm; cin.ignore();
		for (i = 0; i < m; i++) {
			if (strcmp(cm, ngDung[i].sCMND) == 0) {
				ngDung[i].trangThai = 1;
				cout << "Mo Khoa thanh cong!" << endl;
				tt = 1;
				break;
			}
		}
		fstream outFile("UserData.DAT", ios::out);
		for (int k = 0; k < m; k++) {
			ngDung[k].ghi(outFile);
		}
		if (tt == 0) cout << "Khong tim thay nguoi nay!" << endl;
		outFile.close();
		Sleep(1311);
		return i;
	}
}
#pragma once
#include "Header.h"
#include "InMatKhau.h"
#include "NguoiDung.h"
#include "TruyXuat.h"
int login(NguoiDung ngDung[],int& chucvu,int& k){
	system("cls");
	int kt;
	int m = TruyXuatNgDung(ngDung);
	char user[30], pass[20];
	cout << "################Dang Nhap################" << endl;
	cout << "Ten Dang Nhap: "; cin.getline(user, 30);
	cout << "Mat Khau: ";
	inmk(pass);
	char u[5] = "root";
	char p[5] = "toor";
	//cout <<ngDung[0].tenDangNhap<<endl;
	//cout << ngDung[0].MatKhau<< endl;
	if (strcmp(user, u) == 0 && strcmp(pass, p) == 0) {
		system("cls");
		cout << "Dang nhap thanh cong!" << endl;
		chucvu = 1;
		kt = 1;
	}
	else {
		for (k = 0; k < m; k++) {
			if (strcmp(user, ngDung[k].tenDangNhap) == 0) {
				if (strcmp(pass, ngDung[k].MatKhau) == 0) {
					if (ngDung[k].trangThai == 0) {
						cout << "Tai khoan cua ban da bi khoa! lien he ad de duoc mo lai! " << endl;
						break;
					}
					else {
						system("cls");
						cout << "Dang nhap thanh cong!" << endl;
						//chucvu = ngDung[k].chucVu;
						kt = 1;
						break;
					}
				}
				else {
					system("cls");
					cout << "Sai mat khau. Dang nhap that bai!" << endl;
					break;
				}
			}
		}
		if (k == m) {
			system("cls");
			cout << "Sai ten dang nhap!" << endl;
		}
	}
	Sleep(1311);
	return kt;
}
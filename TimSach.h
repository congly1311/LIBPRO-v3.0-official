#pragma once
#include "TruyXuat.h"
#include "Sach.h"
#include "TimKiemChuoi.h"
void timsach(Sach sach[]){
	system("cls");
	double op;
	fstream inFile("Sach.DAT", ios::in);
	int s = TruyXuatSach(sach);
	cout << " ______________________________________________________________________________________" << endl;
	cout << "|                                  TIM KIEM SACH                                       |" << endl;
	cout << "|______________________________________________________________________________________|" << endl;
	cout << "|                                1. Tim theo ID                                        |" << endl;
	cout << "|                                2. Tim theo ten sach                                  |" << endl;
	cout << "|                                3. Tim theo ten tac gia                               |" << endl;
	cout << "|                                4. Tim theo the loai                                  |" << endl;
	cout << "|______________________________________________________________________________________|" << endl;
	cout << "Nhap Lua Chon :"; cin >> op;
	while (op != (int)op) {
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Nhap Lua Chon :"; cin >> op;
	}
	cin.ignore();
	switch ((int)op) {
	case 1: {
				system("cls");
				cout << " ___________________________________________" << endl;
				cout << "|               TIM SACH THEO ID            |" << endl;
				cout << "|___________________________________________|" << endl;
				char id[13];
				int i;
				char ql;
				cout << "Nhap ID sach can tim :"; cin.getline(id, 13);
				for (i = 0; i < s; i++) {
					if (strcmp(sach[i].ID, id) == 0) {
						cout << " ___________________________________________" << endl;
						cout << "|                   TIM THAY  !             |" << endl;
						cout << "|___________________________________________|" << endl;
						cout << "   Ma So:           " << sach[i].ID << endl;
						cout << "   Ten Sach:        " << sach[i].tensach << endl;
						cout << "   Ten tac gia:     " << sach[i].tentacgia << endl;
						cout << "   The loai:        " << sach[i].theloai << endl;
						cout << "   Ngon ngu:        " << sach[i].ngonngu << endl;
						cout << "   Danh gia:        " << sach[i].danhgia << endl;
						cout << "   Trang thai:      ";
						cout << setw(15) << left;
						if (sach[i].trangthai == 1) cout << "Chua muon" << endl;
						else cout << "Da muon" << endl;
						break;
					}
				}
				if (i == s) {
					cout << " ___________________________________________" << endl;
					cout << "|               KHONG TIM THAY !            |" << endl;
					cout << "|___________________________________________|" << endl;
				}
				system("pause");
				break;
	}
	case 2: {
				system("cls");
				cout << " ___________________________________________" << endl;
				cout << "|             TIM SACH THEO TEN             |" << endl;
				cout << "|___________________________________________|" << endl;
				char name[30];
				int i;
				char ql;
				cout << "Nhap ten sach can tim :"; cin.getline(name, 30);
				for (i = 0; i < s; i++) {
					if (timkiemchuoi(sach[i].tensach, name) == 1) {
						cout << " ___________________________________________" << endl;
						cout << "|                   TIM THAY  !             |" << endl;
						cout << "|___________________________________________|" << endl;
						cout << endl << endl << endl;
						cout << " ____________________________________________________________________________________________________________________";
						cout << endl;
						cout << "|" << setw(5) << left << "Ma so" << "|" << setw(30) << left << "Ten sach" << "|" << setw(20) << left << "Tac gia" << "|" << setw(15) << left << "The loai" << "|" << setw(20) << left << "Ngon ngu" << "|" << setw(10) << left << "Danh gia" << "|" << setw(10) << left << "Trang thai" << "|" << endl;
						cout << "|_____|______________________________|____________________|_______________|____________________|__________|__________|" << endl;
						for (int j = i; j < s; j++) {
							if (timkiemchuoi(sach[j].tensach, name) == 1) {
								cout << "|" << setw(5) << left << sach[j].ID << "|" << setw(30) << left << sach[j].tensach << "|" << setw(20) << left << sach[j].tentacgia << "|" << setw(15) << left << sach[j].theloai << "|" << setw(20) << left << sach[j].ngonngu << "|" << setw(10) << left << setprecision(2) << sach[j].danhgia << "|";
								cout << setw(10) << left;
								if (sach[j].trangthai == 1) cout << "Chua muon" << "|" << endl;
								else cout << "Da muon" << "|" << endl;
							}
						}
						cout << "|_____|______________________________|____________________|_______________|____________________|__________|__________|" << endl;
						break;
					}
				}
				if (i == s) {
					cout << " ___________________________________________" << endl;
					cout << "|               KHONG TIM THAY !            |" << endl;
					cout << "|___________________________________________|" << endl;
				}
				system("pause");
				break;
	}
	case 3: {
				system("cls");
				cout << " ___________________________________________" << endl;
				cout << "|          TIM SACH THEO TEN TAC GIA        |" << endl;
				cout << "|___________________________________________|" << endl;
				char name[30];
				int i;
				char ql;
				cout << "Nhap ten Tac gia can tim :"; cin.getline(name, 30);
				for (i = 0; i < s; i++) {
					if (timkiemchuoi(sach[i].tentacgia, name) == 1) {

						cout << " _____________________________________" << endl;
						cout << "|               TIM THAY              |" << endl;
						cout << "|_____________________________________|" << endl;
						cout << endl << endl << endl;
						cout << " ____________________________________________________________________________________________________________________";
						cout << endl;
						cout << "|" << setw(5) << left << "Ma so" << "|" << setw(30) << left << "Ten sach" << "|" << setw(20) << left << "Tac gia" << "|" << setw(15) << left << "The loai" << "|" << setw(20) << left << "Ngon ngu" << "|" << setw(10) << left << "Danh gia" << "|" << setw(10) << left << "Trang thai" << "|" << endl;
						cout << "|_____|______________________________|____________________|_______________|____________________|__________|__________|" << endl;
						for (int j = i; j < s; j++) {
							if (timkiemchuoi(sach[j].tentacgia, name) == 1) {
								cout << "|" << setw(5) << left << sach[j].ID << "|" << setw(30) << left << sach[j].tensach << "|" << setw(20) << left << sach[j].tentacgia << "|" << setw(15) << left << sach[j].theloai << "|" << setw(20) << left << sach[j].ngonngu << "|" << setw(10) << left << setprecision(2) << sach[j].danhgia << "|";
								cout << setw(10) << left;
								if (sach[j].trangthai == 1) cout << "Chua muon" << "|" << endl;
								else cout << "Da muon" << "|" << endl;
							}
						}
						cout << "|_____|______________________________|____________________|_______________|____________________|__________|__________|" << endl;
						break;
					}
				}
				if (i == s) {
					cout << " ___________________________________________" << endl;
					cout << "|               KHONG TIM THAY !            |" << endl;
					cout << "|___________________________________________|" << endl;
				}
				system("pause");
				break;
	}
	case 4: {
				system("cls");
				cout << " ____________________________________________" << endl;
				cout << "|           TIM SACH THEO THE LOAI           |" << endl;
				cout << "|____________________________________________|" << endl;
				cout << endl << endl;
				char name[30];
				int i;
				char ql;
				cout << "Nhap the loai can tim :"; cin.getline(name, 20);
				for (i = 0; i < s; i++) {
					if (timkiemchuoi(sach[i].theloai, name) == 1) {
						cout << " ___________________________________________" << endl;
						cout << "|                   TIM THAY  !             |" << endl;
						cout << "|___________________________________________|" << endl;
						cout << endl << endl << endl;
						cout << " ____________________________________________________________________________________________________________________";
						cout << endl;
						cout << "|" << setw(5) << left << "Ma so" << "|" << setw(30) << left << "Ten sach" << "|" << setw(20) << left << "Tac gia" << "|" << setw(15) << left << "The loai" << "|" << setw(20) << left << "Ngon ngu" << "|" << setw(10) << left << "Danh gia" << "|" << setw(10) << left << "Trang thai" << "|" << endl;
						cout << "|_____|______________________________|____________________|_______________|____________________|__________|__________|" << endl;
						for (int j = i; j < s; j++) {
							if (timkiemchuoi(sach[j].theloai, name) == 1) {
								cout << "|" << setw(5) << left << sach[j].ID << "|" << setw(30) << left << sach[j].tensach << "|" << setw(20) << left << sach[j].tentacgia << "|" << setw(15) << left << sach[j].theloai << "|" << setw(20) << left << sach[j].ngonngu << "|" << setw(10) << left << setprecision(2) << sach[j].danhgia << "|";
								cout << setw(10) << left;
								if (sach[j].trangthai == 1) cout << "Chua muon" << "|" << endl;
								else cout << "Da muon" << "|" << endl;
							}
						}
						cout << "|_____|______________________________|____________________|_______________|____________________|__________|__________|" << endl;
						break;
					}
				}
				if (i == s){
					cout << " ___________________________________________" << endl;
					cout << "|               KHONG TIM THAY !            |" << endl;
					cout << "|___________________________________________|" << endl;
				}
				system("pause");
				break;
	}
	default:
		break;
	}
}

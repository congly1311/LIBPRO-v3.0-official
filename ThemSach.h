#pragma once
#include "Sach.h"
#include "TruyXuat.h"
void themsach(Sach sach[]){
	system("cls");
	int m = TruyXuatSach(sach);
	cout << " ________________________________________" << endl;
	cout << "|               THEM SACH                |" << endl;
	cout << "|________________________________________|" << endl;
	cout << endl;
	double sl;
	fstream outFile("Sach.DAT", ios::app);
	cout << "Nhap so luong sach can them: "; cin >> sl;
	while (cin.bad() || sl < 0 || sl != (int)sl) {
		cin.clear();
		fflush(stdin);
		cout << "Nhap so luong sach can them: "; cin >> sl;
	};
	char ID[13] = "LB0";
	cin.ignore();
	cout << "==================================================" << endl;
	for (int i = 0; i<sl; i++) {
		cout << "Nhap Du lieu Sach thu " << i + 1 << " :" << endl;
		//cout << "Nhap ma so Sach: "; cin.getline(ID, 13);

		strcpy(sach[m + i].ID, strcat(ID, ID + sprintf(ID, "%d", m + i)));
		cout << "Nhap ten sach: "; cin.getline(sach[m + i].tensach, 30);
		cout << "Nhap ten tac gia: "; cin.getline(sach[m + i].tentacgia, 30);
		cout << "Ngon ngu: "; cin.getline(sach[m + i].ngonngu, 20);
		cout << "The loai: "; cin.getline(sach[m + i].theloai, 20);
		cout << "So luong: "; cin >> sach[m + i].soluong; cin.ignore();
		sach[m + i].ghi(outFile);
		cout << endl;
	}
	outFile.close();
	m = TruyXuatSach(sach);
	cout << "Them hoan tat!" << endl;
	Sleep(1311);
}
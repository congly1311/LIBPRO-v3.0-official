#pragma once
#include "NguoiDung.h"
#include "Quyen.h"
void ShowMenu(NguoiDung ngDung[], Quyen quyen[], int vaitro){
	int sl = TruyXuatQuyen(quyen);
	system("cls");
	if (vaitro == 10){
		cout << " ________________________________________________________________" << endl;
		cout << "|               Ban dang dang nhap voi vai tro Admin             | " << endl;
		cout << "|________________________________________________________________|" << endl;
		cout << "|             ################ Menu #################            |" << endl;
		cout << "|________________________________________________________________|" << endl;
		
		for (int k = 0; k<sl; k++) {
			if (quyen[k].Admin == 1) {
				cout << setw(5) << left << "|";
				cout << setw(2) << right << quyen[k].stt << ". "
					<< setw(40) << left << quyen[k].tenQuyen
					<< setw(17) << right << "|" << endl;
			}
		}
		cout << "|________________________________________________________________|" << endl;
	}
	else if (vaitro == 20){
		cout << " ________________________________________________________________" << endl;
		cout << "|              Ban dang dang nhap voi vai tro Thu thu            | " << endl;
		cout << "|________________________________________________________________|" << endl;
		cout << "|             ################ Menu #################            |" << endl;
		cout << "|________________________________________________________________|" << endl;

		for (int k = 0; k<sl; k++) {
			if (quyen[k].ThuThu == 1) {
				cout << setw(5) << left << "|";
				cout << setw(2) << right << quyen[k].stt << ". "
					<< setw(40) << left << quyen[k].tenQuyen
					<< setw(17) << right << "|" << endl;
			}
		}
		cout << "|________________________________________________________________|" << endl;
	}
	else if (vaitro == 30){
		cout << " ________________________________________________________________" << endl;
		cout << "|              Ban dang dang nhap voi vai tro Doc gia             | " << endl;
		cout << "|________________________________________________________________|" << endl;
		cout << "|             ################ Menu #################            |" << endl;
		cout << "|________________________________________________________________|" << endl;

		for (int k = 0; k<sl; k++ ) {
			if (quyen[k].DocGia == 1) {
				cout << setw(5) << left << "|";
				cout << setw(2) << right << quyen[k].stt << ". "
					<< setw(40) << left << quyen[k].tenQuyen
					<< setw(17) << right << "|" << endl;
			}
		}
		cout << "|________________________________________________________________|" << endl;
	}
}
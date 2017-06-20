#pragma once
#include "YeuCau.h"
#include "ThongBao.h"
#include "Header.h"
#include "Quyen.h"
#include "Sach.h"
#include "MuonSach.h"
#include "NguoiDung.h"
#include "TruyXuat.h"
#include "InMatKhau.h"
#include "TimKiemChuoi.h"
#include "ThongBaoTuDong.h"
#include "ShowMenu.h"
#include "ChucNang.h"
#include "Login.h"

#pragma warning(disable:4996)




int main() {
	// lay thoi gian he thong:
	time_t baygio = time(0);
	tm *ltm = localtime(&baygio);
	/*

	//*/
	///*
	Quyen quyen[30];
	/*
	quyen[0].stt = 0; quyen[0].Admin = 1; strcpy(quyen[0].tenQuyen, "Them nguoi dung.");
	quyen[1].stt = 1; quyen[1].Admin = 1; strcpy(quyen[1].tenQuyen, "Khoa nguoi dung.");
	quyen[2].stt = 2; quyen[2].Admin = 1; strcpy(quyen[2].tenQuyen, "Mo khoa nguoi dung.");
	quyen[3].stt = 3; quyen[3].Admin = 1; strcpy(quyen[3].tenQuyen, "Quan ly quyen.");
	quyen[4].stt = 4; quyen[4].ThuThu = quyen[4].DocGia = 1; strcpy(quyen[4].tenQuyen, "Xem kho sach.");
	quyen[5].stt = 5; quyen[5].ThuThu = quyen[5].DocGia = 1; strcpy(quyen[5].tenQuyen, "Tim sach.");
	quyen[6].stt = 6; quyen[6].ThuThu = 1; strcpy(quyen[6].tenQuyen, "Them sach.");
	quyen[7].stt = 7; quyen[7].DocGia = 1; strcpy(quyen[7].tenQuyen, "Muon sach.");
	quyen[8].stt = 8; quyen[8].DocGia = 1; strcpy(quyen[8].tenQuyen, "Tra sach.");
	quyen[9].stt = 9; quyen[9].DocGia = 1; strcpy(quyen[9].tenQuyen, "Xem balo.");
	quyen[10].stt = 10; quyen[10].Admin = quyen[10].ThuThu = quyen[10].DocGia = 1; strcpy(quyen[10].tenQuyen, "Doi mat khau.");
	quyen[11].stt = 11; quyen[11].Admin = quyen[11].ThuThu = quyen[11].DocGia = 1; strcpy(quyen[11].tenQuyen, "Xem thong bao.");
	quyen[12].stt = 12; quyen[12].Admin = 1; strcpy(quyen[12].tenQuyen, "Reset mat khau");
	quyen[13].stt = 13; quyen[13].Admin = quyen[13].ThuThu = 1; strcpy(quyen[13].tenQuyen, "Tim kiem tai khoan.");
	quyen[14].stt = 14; quyen[14].Admin = quyen[14].ThuThu = 1; strcpy(quyen[14].tenQuyen, "Tao thong bao.");
	quyen[15].stt = 15; quyen[15].ThuThu = 1; strcpy(quyen[15].tenQuyen, "Chinh sua sach.");
	quyen[16].stt = 16; quyen[16].ThuThu = 1; strcpy(quyen[16].tenQuyen, "Xoa sach.");
	quyen[17].stt = 17; quyen[17].Admin = quyen[17].ThuThu = quyen[17].DocGia = 1; strcpy(quyen[17].tenQuyen, "Xem thong tin tai khoan.");
	quyen[18].stt = 18; quyen[18].Admin = quyen[18].ThuThu = 1; strcpy(quyen[18].tenQuyen, "Xem danh sach tai khoan.");
	quyen[19].stt = 19; quyen[19].Admin = quyen[19].ThuThu = quyen[19].DocGia = 1; strcpy(quyen[19].tenQuyen, "Sua thong tin tai khoan.");
	quyen[20].stt = 20; quyen[20].ThuThu = 1; strcpy(quyen[20].tenQuyen, "Yeu cau tu doc gia.");

	
	quyen[21].stt = 21; quyen[21].Admin = quyen[21].ThuThu = 1; strcpy(quyen[21].tenQuyen, "Doi vai tro.");
	quyen[22].stt = 22; quyen[22].Admin = 1; strcpy(quyen[22].tenQuyen, "Sua vai tro");
	quyen[23].stt = 23; quyen[23].Admin = quyen[23].ThuThu = quyen[23].DocGia = 1; strcpy(quyen[23].tenQuyen, "Dang xuat.");
	quyen[24].stt = 24; quyen[24].Admin = quyen[24].ThuThu = quyen[24].DocGia = 1; strcpy(quyen[24].tenQuyen, "Thoat.");
	
	fstream outFile("Quyen.DAT", ios::out);
	////Quyen quyen[30];
	for (int i = 0; i < 25; i++){
		quyen[i].ghi(outFile);
	}
	outFile.close();
	*/
	TruyXuatQuyen(quyen);

	int taikhoanhientai;
	Sach sach[100];
	NguoiDung ngDung[100];
	MuonSach muonsach[100];
	ThongBao thongbao[100];
	YeuCau yc[100];
	LichSu ls[1000];
	char tdn[30];
	//char u[30] = "root\0";
	//char p[20] = "toor\0";
	//CapNhatNgDung(ngDung);
	fstream outSFile("Sach.DAT", ios::app); outSFile.close();
	fstream outS1File("UserData.DAT", ios::app); outS1File.close();
	fstream outS2File("MuonSach.DAT", ios::app); outS2File.close();
	fstream outS3File("ThongBao.DAT", ios::app); outS3File.close();
	fstream outS4File("YeuCau.DAT", ios::app); outS4File.close();
	fstream outS5File("LichSu.DAT", ios::app); outS5File.close();
	int k = 0;
	int op;
	while (true) {
		int m, kt = 0;
		int chucvu;
		m = TruyXuatNgDung(ngDung);
		system("cls");
		//cout << m << endl;
		char user[30], pass[20];
		cout << endl << endl << endl;
		cout << "             __                __ ________  __        _______   _______    ___      ___ " << endl;
		cout << "             \\ \\              / /|  ______||  |      /   ____\\ /  ___  \\  |   \\    /   |" << endl;
		cout << "              \\ \\    ____    / / |  |_____ |  |      |  |      | |   | |  |    \\  /    |" << endl;
		cout << "               \\ \\  /    \\  / /  |   _____||  |      |  |      | |   | |  |  |\\ \\/ /|  |" << endl;
		cout << "                \\ \\/  /\\  \\/ /   |  |_____ |  |_____ |  |_____ | |___| |  |  | \\__/ |  |" << endl;
		cout << "                 \\___/  \\___/    |________||________|\\_______/ \\_______/  |__|      |__|" << endl;
		cout << "                           _________  _______           __  _________      _______          " << endl;
		cout << "                          |___   ___|/  ___  \\          \\ \\/ /______ |    /  ___  \\               " << endl;
		cout << "                    ___       | |    | |   | |           \\  / _____| |    | |   | |       " << endl;
		cout << "                   |   |      | |    | |   | |            \\/ |_____  |    | |   | | " << endl;
		cout << "                   |   |      | |    | |___| |                _____| |    | |___| |  " << endl;
		cout << "                   |   |      |_|    \\_______/	             |_______| [] \\_______/           " << endl;
		cout << "                   |   |            __   __        ______   ______   _______                             " << endl;
		cout << "                   |   |           |  | |  |      |   _  \\ |   _  \\ /  ___  \\     " << endl;
		cout << "                   |   |           |  | |  |___   |  |_| | |  |_| | | |   | |        " << endl;
		cout << "                   |   |__________ |  | |   __ \\  |   ___/ |     _/ | |   | |" << endl;
		cout << "                   |              ||  | |  |__| | |  |     |  |\\ \\  | |___| |         " << endl;
		cout << "                   |______________||__| |______/  |__|     |__| \\_\\ \\_______/                       " << endl;
		Sleep(1311);
		system("cls");
		int vaitro;
		
		do {
			kt = login(ngDung, chucvu, k);
		} while (kt != 1);
		if (ngDung[k].chucVu.admin == 1||chucvu == 1) vaitro = 10;
		else if (ngDung[k].chucVu.thuthu == 1) vaitro = 20;
		else vaitro = 30;
		ThongBaoTuDong(ngDung, thongbao, muonsach, k);
		do {
			system("cls");
			int ch = 0;
			cout << ngDung[k].sCMND << endl;
			cout << vaitro << endl;
			switch (vaitro){
			case 10: {
					ShowMenu(ngDung, quyen, vaitro);
					cout << "Nhap lua chon: "; cin >> op; cin.ignore();
					if (quyen[op].Admin == 0) cout << "Ban khong duoc ho tro chuc nang nay!";
					else kt = Chucnang(k, ngDung, op, m, quyen, ngDung[k].tenDangNhap, sach, muonsach, thongbao, yc, vaitro, ls);
					break;
			}

			case 20: {
					ShowMenu(ngDung, quyen, vaitro);
					cout << "Nhap lua chon: "; cin >> op; cin.ignore();
					if (quyen[op].ThuThu == 0) cout << "Ban khong duoc ho tro chuc nang nay!";
					else kt = Chucnang(k, ngDung, op, m, quyen, ngDung[k].tenDangNhap, sach, muonsach, thongbao, yc, vaitro, ls);
					break;
			}
			case 30: {
					ShowMenu(ngDung, quyen, vaitro);
					cout << "Nhap lua chon: "; cin >> op; cin.ignore();
					if (quyen[op].DocGia == 0) cout << "Ban khong duoc ho tro chuc nang nay!";
					else kt = Chucnang(k, ngDung, op, m, quyen, ngDung[k].tenDangNhap, sach, muonsach, thongbao, yc, vaitro, ls);
					break;
			}
			}

			Sleep(1311);
		} while (kt != -1);
		

		
	}
	//*/
	return 0;
}
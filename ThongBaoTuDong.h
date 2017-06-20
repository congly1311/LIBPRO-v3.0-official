#pragma once
#include "Header.h"
#include "NguoiDung.h"
#include "MuonSach.h"
#include "ThongBao.h"
#include "TruyXuat.h"
void ThongBaoTuDong(NguoiDung ngDung[], int hientai, ThongBao thongbao[], int ms, MuonSach muonsach[]) {
	int sl = TruyXuatThongBao(thongbao);
	int m = TruyXuatNgDung(ngDung);
	int sls = TruyXuatMuonSach(muonsach);
	//thongbao[sl].IDgui = ngDung[hientai].chucVu;
	thongbao[sl].IDthongbao = sl + 1;
	//thongbao[sl].nhap();
	time_t rawtime;
	struct tm *info;
	char buffer[50];
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer, 80, "%x - %I:%M%p", info);
	strcpy(thongbao[sl].time, buffer);
	strcpy(thongbao[sl].IDgui, "-1");
	if (ms == 1) {  // thong bao chao mung
		strcpy(thongbao[sl].IDnhan, ngDung[m - 1].sCMND);
		strcpy(thongbao[sl].tieude, "Chao mung ban den voi thu vien cua chung toi");
		strcpy(thongbao[sl].noidung, "Xin chao ");
		strcat(thongbao[sl].noidung, ngDung[m - 1].tenNguoiDung);
		strcat(thongbao[sl].noidung, ". Chung toi rat vui vi ban da den thu vien cua chung toi. Neu co bat ky thac mac nao xin hay lien he voi thu thu de duoc ho tro");
	}
	//else if (ms == 2) { // thong bao muon sach thanh cong
	//	strcpy(thongbao[sl].IDnhan,ngDung[hientai].sCMND);
	//	strcpy(thongbao[sl].tieude, "Muon sach thanh cong!");
	//	strcpy(thongbao[sl].noidung, "Chuc mung ban da muon thanh cong sach ");
	//	strcat(strcat(strcat(thongbao[sl].noidung, muonsach[sls - 1].tensach), " vao luc "), buffer);

	//	strcat(thongbao[sl].noidung, ". Ban phai tra sach muon nhat la sau 15 ngay ke tu ngay muon sach. Xin cam on. ");
	//}
	//else if (ms == 3) { // thong bao tra sach thanh cong
	//	strcpy(thongbao[sl].IDnhan, ngDung[hientai].sCMND);
	//	strcpy(thongbao[sl].tieude, "Tra sach thanh cong!");
	//	strcpy(thongbao[sl].noidung, "Ban da tra thanh cong sach ");
	//	strcat(strcat(strcat(thongbao[sl].noidung, muonsach[sls - 1].tensach), " vao luc "), buffer);
	//	strcat(thongbao[sl].noidung, ". Cam on ban da tuog tac voi thu vien cua chung toi. ");
	//}
	else if (ms == 4) {  // thong bao Doi mat khau
		strcpy(thongbao[sl].IDnhan, ngDung[m - 1].sCMND);
		strcpy(thongbao[sl].tieude, "Thong bao doi mat khau");
		strcpy(thongbao[sl].noidung, "Xin chao ");
		strcat(thongbao[sl].noidung, ngDung[m - 1].tenNguoiDung);
		strcat(thongbao[sl].noidung, ". De nghi ban doi mat khau trong lan dang nhap dau tien. Moi thac mac xin lien he admin.");
	}
	else cout << "";
	fstream outFile("ThongBao.DAT", ios::app);
	thongbao[sl].ghi(outFile);
	outFile.close();
}
void ThongBaoTuDong(NguoiDung ngDung[], ThongBao thongbao[], MuonSach muonsach[], int hientai, char tensach[], int ma){
	int sl = TruyXuatThongBao(thongbao);
	int m = TruyXuatNgDung(ngDung);
	int sls = TruyXuatMuonSach(muonsach);
	//thongbao[sl].IDgui = ngDung[hientai].chucVu;
	thongbao[sl].IDthongbao = sl + 1;
	//thongbao[sl].nhap();
	time_t rawtime;
	struct tm *info;
	char buffer[50];
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer, 80, "%x - %I:%M%p", info);
	if (ma == 0){
		strcpy(thongbao[sl].time, buffer);
		strcpy(thongbao[sl].IDgui, "-1");
		strcpy(thongbao[sl].IDnhan, ngDung[hientai].sCMND);
		strcpy(thongbao[sl].tieude, "Muon sach thanh cong!");
		strcpy(thongbao[sl].noidung, "Chuc mung ban da muon thanh cong sach ");
		strcat(strcat(strcat(thongbao[sl].noidung, tensach), " vao luc "), buffer);
		strcat(thongbao[sl].noidung, ". Ban phai tra sach muon nhat la sau 15 ngay ke tu ngay muon sach. Xin cam on. ");
		fstream outFile("ThongBao.DAT", ios::app);
		thongbao[sl].ghi(outFile);
		outFile.close();
	}
	else if (ma == 1){
		strcpy(thongbao[sl].time, buffer);
		strcpy(thongbao[sl].IDgui, "-1");
		strcpy(thongbao[sl].IDnhan, ngDung[hientai].sCMND);
		strcpy(thongbao[sl].tieude, "Muon sach that bai!");
		strcpy(thongbao[sl].noidung, "Rat tiec ban chua muon duoc sach ");
		strcat(thongbao[sl].noidung, tensach);
		strcat(thongbao[sl].noidung, ". Ban hay thu lai sau ");
		fstream outFile("ThongBao.DAT", ios::app);
		thongbao[sl].ghi(outFile);
		outFile.close();
	}
	else if (ma == 2){
		strcpy(thongbao[sl].time, buffer);
		strcpy(thongbao[sl].IDgui, "-1");
		strcpy(thongbao[sl].IDnhan, ngDung[hientai].sCMND);
		strcpy(thongbao[sl].tieude, "Tra sach thanh cong!");
		strcpy(thongbao[sl].noidung, "Chuc mung ban da tra thanh cong sach ");
		strcat(strcat(strcat(thongbao[sl].noidung, tensach), " vao luc "), buffer);
		strcat(thongbao[sl].noidung, ". Cam on ban da tuong tac voi thu vien. ");
		fstream outFile("ThongBao.DAT", ios::app);
		thongbao[sl].ghi(outFile);
		outFile.close();
	}
}
void ThongBaoTuDong(NguoiDung ngDung[], ThongBao thongbao[], MuonSach muonsach[], int hientai){
	int sl = TruyXuatThongBao(thongbao);
	int m = TruyXuatNgDung(ngDung);
	int sls = TruyXuatMuonSach(muonsach);
	//thongbao[sl].IDgui = ngDung[hientai].chucVu;
	int dem = 0;
	//thongbao[sl].nhap();
	time_t baygio = time(0);
	tm *ltm = localtime(&baygio);
	time_t rawtime;
	struct tm *info;
	char buffer[50];
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer, 80, "%x - %I:%M%p", info);
	for (int i = 0; i < sls; i++){
		if (strcmp(ngDung[hientai].sCMND, muonsach[i].IDmuon) == 0){
			cout << muonsach[i].ngayMuon[0] << endl;
			if (ltm->tm_mday - muonsach[i].ngayTra[0] == -1){
				if (muonsach[i].trangthai == 0){
					thongbao[sl+dem].IDthongbao = sl + 1;
					strcpy(thongbao[sl+dem].IDgui, "-1");
					strcpy(thongbao[sl+dem].time, buffer);
					strcpy(thongbao[sl+dem].IDnhan, ngDung[hientai].sCMND);
					strcpy(thongbao[sl+dem].tieude, "Chu y sap het han muon sach!");
					strcpy(thongbao[sl+dem].noidung, "Sach cua ban, ");
					strcat(strcat(thongbao[sl+dem].noidung, muonsach[sls - 1].tensach), ", se het han vao ngay mai. ");
					fstream outFile("ThongBao.DAT", ios::app);
					thongbao[sl].ghi(outFile);
					outFile.close();
				}
			}
		}
	}
	
}
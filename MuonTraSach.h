#pragma once
#include "TruyXuat.h"
#include "Sach.h"
#include "MuonSach.h" 
#include "YeuCau.h"
#include "ThongBao.h"
#include "ThongBaoTuDong.h"
#include "InMuonSach.h"
#include "GhiLichSu.h"
#include "LichSu.h"
int muontrasach(Sach sach[], MuonSach muonsach[], NguoiDung ngDung[], int hientai, YeuCau yc[], ThongBao thongbao[], int w, LichSu ls[]){
	time_t baygio = time(0);
	tm *ltm = localtime(&baygio);
	//nguoi dung hien tai
	char id[13];
	int op;
	int sl1 = TruyXuatSach(sach);
	int sl2 = TruyXuatMuonSach(muonsach);
	int sl = TruyXuatNgDung(ngDung);
	int dem = 0;
	for (int i = 0; i < sl2; i++) {
		if (strcmp(muonsach[i].IDmuon, ngDung[hientai].sCMND) == 0)
		if (muonsach[i].trangthai == 0)
			dem++;
	}
	system("cls");
	if (w == 1){
		cout << " _________________________________________" << endl;
		cout << "|           DANG KY MUON SACH             |" << endl;
		cout << "|_________________________________________|" << endl;
		cout << endl;
		if (dem != 0) {
			cout << "Co " << dem << " Sach da muon: " << endl;
			inmuonsach(ngDung, muonsach, hientai, 0);
		}
		cout << "Nhap ID sach muon muon: "; cin.getline(id, 13);
		for (int i = 0; i < sl1; i++) {
			if (strcmp(id, sach[i].ID) == 0) {
				if (sach[i].soluong > 0) {
					cout << "Tim thay: " << sach[i].tensach << endl;
					cout << "So luong con: " << sach[i].soluong << endl;
					cout << "Ban co muon muon sach nay?" << endl;
					cout << "1. Co " << endl;
					cout << "2. Khong " << endl;
					cout << "Nhap lua chon: "; cin >> op; cin.ignore();
					switch (op) {
					case 1: {
								muonsach[sl2].ID = sl2 + 1;
								strcpy(muonsach[sl2].IDmuon, ngDung[hientai].sCMND);
								strcpy(muonsach[sl2].IDsach, sach[i].ID);


								strcpy(muonsach[sl2].tensach, sach[i].tensach);
								strcpy(muonsach[sl2].tentacgia, sach[i].tentacgia);
								strcpy(muonsach[sl2].ngonngu, sach[i].ngonngu);
								strcpy(muonsach[sl2].theloai, sach[i].theloai);
								muonsach[sl2].ngayMuon[0] = ltm->tm_mday;
								muonsach[sl2].ngayMuon[1] = 1 + ltm->tm_mon;
								muonsach[sl2].ngayMuon[2] = 1900 + ltm->tm_year;
								muonsach[sl2].ngayTra[0] = ltm->tm_mday + 15;
								muonsach[sl2].trangthai = 2;// dang xu ly
								if (muonsach[sl2].ngayMuon[0] + 15 > 30) {
									muonsach[sl2].ngayTra[0] = ltm->tm_mday + 15 - 29;
									muonsach[sl2].ngayTra[1] = muonsach[sl2].ngayMuon[1] + 1;
									if (muonsach[sl2].ngayTra[1] > 12) {
										muonsach[sl2].ngayTra[1] = 1;
										muonsach[sl2].ngayTra[2] = muonsach[sl2].ngayMuon[2] + 1;
									}
									else {
										muonsach[sl2].ngayTra[2] = muonsach[sl2].ngayMuon[2];
									}
								}
								else {
									muonsach[sl2].ngayTra[0] = ltm->tm_mday + 15;
									muonsach[sl2].ngayTra[1] = 1 + ltm->tm_mon;
									muonsach[sl2].ngayTra[2] = 1900 + ltm->tm_year;
								}
								fstream outFile("MuonSach.DAT", ios::app);
								muonsach[sl2].ghi(outFile);
								outFile.close();
								
								lichsu(ls, ngDung, sach, hientai, sach[i].tensach, 1);
								cout << "Yeu cau muon sach cua ban dang duoc xu ly! Ban se nhan duoc thong bao xac nhan sau. Xin cam on.";
								sach[i].soluong -= 1; 

								int slyc = TruyXuatYeuCau(yc);
								yc[slyc].stt = slyc + 1;
								//yc[slyc].GetInf(1, ngDung[hientai].sCMND, ngDung[hientai].tenNguoiDung, muonsach[sl2].IDsach, muonsach[sl2].tensach, sl2);

								yc[slyc].mayc = 1;
								strcpy(yc[slyc].ID, ngDung[hientai].sCMND);
								strcpy(yc[slyc].IDsach, muonsach[sl2].IDsach);
								strcpy(yc[slyc].tensach, muonsach[sl2].tensach);
								strcpy(yc[slyc].tenND, ngDung[hientai].tenNguoiDung);
								yc[slyc].IDmuon = sl2;

								fstream out1File("YeuCau.DAT", ios::app);
								yc[slyc].ghi(out1File);
								out1File.close();
								fstream out2File("Sach.DAT", ios::out);
								for (int j = 0; j < sl1; j++){
									sach[j].ghi(out2File);
								}
								out2File.close();
								//ThongBaoTuDong(ngDung, hientai, thongbao, 2, muonsach);

					}
					default:
						break;
					}
				}
				else cout << "Khong thay sach can tim hoac sach da het. Xin vui long quay lai sau." << endl;
			}
		}
		Sleep(3000);
	}
	else {
		
		
		system("cls");
		time_t baygio = time(0);
		tm *ltm = localtime(&baygio);
		cout << " _________________________________________" << endl;
		cout << "|                TRA SACH                 |" << endl;
		cout << "|_________________________________________|" << endl;
		char id[13];
		int dem = 0;
		for (int i = 0; i < sl2; i++) {
		
			if (strcmp(muonsach[i].IDmuon, ngDung[hientai].sCMND) == 0)
			if (muonsach[i].trangthai == 0)
				dem++;
		}
		if (dem == 0) {
			cout << "Ban chua muon sach nao." << endl;
		}
		else {
			cout << "Co " << dem << " Sach da muon: " << endl;
			inmuonsach(ngDung, muonsach, hientai, 0);
			cout << "Nhap ID sach muon tra: "; cin.getline(id, 13);
			
			for (int i = 0; i < sl2; i++) {
				if (strcmp(muonsach[i].IDsach, id) == 0) {
					if (strcmp(muonsach[i].IDmuon, ngDung[hientai].sCMND) == 0) {
						cout << "Tim thay sach " << muonsach[i].tensach << endl;
						cout << "Ban co muon tra sach nay khong? " << endl;
						int op;
						cout << "1. Co" << endl;
						cout << "2. Khong" << endl;
						cout << "Nhap lua chon: "; cin >> op; cin.ignore();

						switch (op) {
						case 1: {
									if (ltm->tm_mon+1 > muonsach[i].ngayTra[1]){
										Sleep(1311);
										system("cls");
										cout << "THONG BAO" << endl << endl;
										cout << "Ban da tra sach tre so voi quy dinh, tai khoan cua ban se bi tam khoa." << endl;
										cout << "De duoc mo lai xin hay lien he voi admin" << endl;
										cout << "Moi thac mac lien quan den van de nay xin lien he toi SDT: 098XXXXXXXX hoac gap thu thu de duoc giai dap" << endl;
										cout << "Xin cam on!" << endl << endl;
										cout << "                                                                                        Quan tri" << endl;
										
										ngDung[hientai].trangThai = 0;
										cout << sl << endl;
										fstream out2File("NguoiDung.DAT", ios::out);
										for (int t = 0; t < sl; t++){
											ngDung[t].ghi(out2File);
											cout << ngDung[t].trangThai << endl;
											cout << "ghi" << endl;
										}
										out2File.close();
										Sleep(10000);
										fstream out1File("Sach.DAT", ios::out);
										for (int j = 0; j < sl1; j++) {
											sach[j].ghi(out1File);
										}
										out1File.close();
										ThongBaoTuDong(ngDung, thongbao, muonsach, hientai, yc[i].tensach, 1);
										for (int j = i; j < sl2; j++)
											muonsach[j] = muonsach[j + 1];
										fstream outFile("MuonSach.DAT", ios::out);
										for (int l = 0; l < sl2 - 1; l++) {
											muonsach[l].ghi(outFile);
										}
										for (int l = 0; l < sl1; l++) {
											if (strcmp(sach[l].ID, id) == 0) {
												sach[l].soluong++;
												fstream out2File("Sach.DAT", ios::out);
												for (int t = 0; t < sl1; t++) {
													sach[t].ghi(out2File);
												}
												out2File.close();
												lichsu(ls, ngDung, sach, hientai, sach[l].tensach, 2);
											}
										}
										return -1;

									}
									for (int j = i; j < sl2; j++)
										muonsach[j] = muonsach[j + 1];
									fstream outFile("MuonSach.DAT", ios::out);
									for (int l = 0; l < sl2 - 1; l++) {
										muonsach[l].ghi(outFile);
									}
									outFile.close();
									for (int l = 0; l < sl1; l++) {
										if (strcmp(sach[l].ID, id) == 0) {
											sach[l].soluong++;
											fstream out2File("Sach.DAT", ios::out);
											for (int t = 0; t < sl1; t++) {
												sach[t].ghi(out2File);
											}
											out2File.close();
											lichsu(ls, ngDung, sach, hientai, sach[l].tensach, 2);
										}
									}
									//sach[id - 1].trangthai = 1;
									
									cout << "Da tra sach!" << endl;
									int choose;
									int diem;
									cout << " _________________________________________" << endl;
									cout << "|                DANH GIA                 |" << endl;
									cout << "|_________________________________________|" << endl;
									cout << "Ban co muon danh gia sach" << endl;
									cout << "1. Co \n2. Khong" << endl;
									cout << "Nhap lua chon: ";
									cin >> choose; cin.ignore();
									int k = 0;
									for (k = 0; k < sl2; k++) {
										if (strcmp(sach[k].ID, id) == 0) {
											
											break;
										}
									}
									if (choose == 1) {
										cout << "Nhap so diem ban danh gia: ";
										cin >> diem;
										sach[k].danhgia = (sach[k].danhgia*sach[k].soluotdanhgia + diem) / (sach[k].soluotdanhgia + 1);
										sach[k].soluotdanhgia = sach[k].soluotdanhgia + 1;
										cout << "Cam on ban da danh gia !!!";
									}
									fstream out1File("Sach.DAT", ios::out);
									for (int j = 0; j < sl1; j++) {
										sach[j].ghi(out1File);
									}
									out1File.close();
									ThongBaoTuDong(ngDung, thongbao, muonsach, hientai, yc[i].tensach, 1);

									break;
						}
						default:
							break;
						}
					}
					else cout << "Ban khong muon sach nay." << endl;
				}
			}

		}
		Sleep(1311);
		return 0;
	}
}
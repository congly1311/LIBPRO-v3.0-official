#pragma once
#include "Header.h"
#include "LichSu.h"
#include "TruyXuat.h"
#include "NguoiDung.h"
void lichsu(LichSu ls[], NguoiDung ngDung[], int hientai, char id[], int n){
	int sl = TruyXuatLichSu(ls);
	int sln = TruyXuatNgDung(ngDung);
	time_t rawtime;
	struct tm *info;
	char buffer[50];
	char nd[50];
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer, 80, "%x - %I:%M%p", info);
	strcpy(ls[sl].thoigian, buffer);
	strcpy(ls[sl].ID, ngDung[hientai].sCMND);
	int idnd = 0;
	for (int i = 0; i < sln; i++){
		if (strcmp(ngDung[i].sCMND, id) == 0) idnd = i;
	}
	if (n == 1) {
		strcpy(nd, "Them nguoi dung ");
		strcat(nd, ngDung[idnd].tenNguoiDung);
		strcpy(ls[sl].noidung, nd);
		fstream outFile("LichSu.DAT", ios::app);
		ls[sl].ghi(outFile);
		outFile.close();
	}
}
void lichsu(LichSu ls[], NguoiDung ngDung[], int hientai, int id, int n){
	int sl = TruyXuatLichSu(ls);
	int sln = TruyXuatNgDung(ngDung);
	time_t rawtime;
	struct tm *info;
	char buffer[50];
	char nd[50];
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer, 80, "%x - %I:%M%p", info);
	strcpy(ls[sl].thoigian, buffer);
	strcpy(ls[sl].ID, ngDung[hientai].sCMND);
	if (n == 1) {
		strcpy(nd, "Khoa nguoi dung ");
		strcat(nd, ngDung[id].tenNguoiDung);
		strcpy(ls[sl].noidung, nd);
		fstream outFile("LichSu.DAT", ios::app);
		ls[sl].ghi(outFile);
		outFile.close();
	}
	if (n == 2) {
		strcpy(nd, "Mo khoa nguoi dung ");
		strcat(nd, ngDung[id].tenNguoiDung);
		strcpy(ls[sl].noidung, nd);
		fstream outFile("LichSu.DAT", ios::app);
		ls[sl].ghi(outFile);
		outFile.close();
	}
}
void lichsu(LichSu ls[], NguoiDung ngDung[], Sach sach[], int hientai, char id[], int n){
	int sl = TruyXuatLichSu(ls);
	int sln = TruyXuatNgDung(ngDung);
	int sls = TruyXuatSach(sach);
	time_t rawtime;
	struct tm *info;
	char buffer[50];
	char nd[50];
	time(&rawtime);
	info = localtime(&rawtime);
	strftime(buffer, 80, "%x - %I:%M%p", info);
	strcpy(ls[sl].thoigian, buffer);
	strcpy(ls[sl].ID, ngDung[hientai].sCMND);
	int ids = 0;
	for (int i = 0; i < sln; i++){
		if (strcmp(sach[i].ID, id) == 0) ids = i;
	}
	if (n == 1) {
		strcpy(nd, "Dang ky muon sach ");
		strcat(nd, sach[ids].tensach);
		strcpy(ls[sl].noidung, nd);
		fstream outFile("LichSu.DAT", ios::app);
		ls[sl].ghi(outFile);
		outFile.close();
	}
	if (n == 2) {
		strcpy(nd, "Tra sach ");
		strcat(nd, sach[ids].tensach);
		strcpy(ls[sl].noidung, nd);
		fstream outFile("LichSu.DAT", ios::app);
		ls[sl].ghi(outFile);
		outFile.close();
	}
}
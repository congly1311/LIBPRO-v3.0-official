#pragma once
#include "Header.h"
class ThongBao {
public:
	int IDthongbao;
	char IDgui[13];
	char IDnhan[13];
	char time[50];
	char tieude[100];
	char noidung[1000];
	void ghi(fstream&);
	void doc(fstream&);
	void nhap();
};
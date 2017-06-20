#pragma once
#include "Header.h"
class Quyen {
public:
	unsigned int stt;
	bool DocGia = 0;
	bool ThuThu = 0;
	bool Admin = 0;
	char tenQuyen[100];
	void doc(fstream&);
	void ghi(fstream&);
};
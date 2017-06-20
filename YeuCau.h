#pragma once
#include <iostream>
#include <fstream>
#include "Header.h" 
class YeuCau{
public:
	int stt;
	int mayc; //1. muon sach; 2. tra sach
	char ID[13];
	char tenND[30];
	char IDsach[13];
	int IDmuon;
	char tensach[30];
	bool c = 0; //0 - degree, 1 - agree
	void ghi(fstream&);
	void doc(fstream&);
};

#pragma once
#include "LichSu.h"
void LichSu::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(LichSu));
}
void LichSu::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(LichSu));
}
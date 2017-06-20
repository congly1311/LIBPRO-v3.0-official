#include "NguoiDung.h"
void NguoiDung::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(NguoiDung));
}
void NguoiDung::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(NguoiDung));
}
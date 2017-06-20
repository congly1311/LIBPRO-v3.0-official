#include "MuonSach.h"
void MuonSach::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(MuonSach));
}
void MuonSach::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(MuonSach));
}
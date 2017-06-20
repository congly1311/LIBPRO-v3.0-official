#include "Header.h"
#include "ThongBao.h"
#include <fstream>
void ThongBao::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(ThongBao));
}
void ThongBao::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(ThongBao));
}
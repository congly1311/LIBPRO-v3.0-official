#include "YeuCau.h"
#include "Header.h"
#include <fstream>
void YeuCau::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(YeuCau));
}
void YeuCau::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(YeuCau));
}

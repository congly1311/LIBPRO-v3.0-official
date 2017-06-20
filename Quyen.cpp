#include "Quyen.h"
void Quyen::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(Quyen));
}
void Quyen::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(Quyen));
}
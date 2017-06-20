#include "Sach.h"
#include "Header.h"
void Sach::nhap() {
	cout << "Nhap ma so Sach: "; cin.getline(ID, 13);
	cout << "Nhap ten sach: "; cin.getline(tensach, 30);
	cout << "Nhap ten tac gia: "; cin.getline(tentacgia, 30);
	cout << "Ngon ngu: "; cin.getline(ngonngu, 20);
	cout << "The loai: "; cin.getline(theloai, 20);
};
void Sach::ghi(fstream &ofs) {
	ofs.write(reinterpret_cast< const char * > (this), sizeof(Sach));
}
void Sach::doc(fstream &ifs) {
	ifs.read(reinterpret_cast< char * > (this), sizeof(Sach));
}
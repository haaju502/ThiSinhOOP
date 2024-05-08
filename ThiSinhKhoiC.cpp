#include "ThiSinhKhoiC.h"
#include <bits/stdc++.h>
ThiSinhKhoiC::ThiSinhKhoiC()
{
	diemVan = 0; 
	diemSu = 0;
	diemDia = 0;
}

ThiSinhKhoiC::~ThiSinhKhoiC()
{
}

ThiSinhKhoiC::ThiSinhKhoiC(string sbd, string hoTen, string diaChi, float diemVan, float diemSu, float diemDia) : ThiSinh(sbd,hoTen,diaChi ) {
	this->diemVan = diemVan;
	this->diemSu = diemSu;
	this->diemDia = diemDia;
}

void ThiSinhKhoiC::setDiemVan(float diemVan) {
	this->diemVan = diemVan;
}

float ThiSinhKhoiC::getDiemVan() {
	return diemVan;
}

void ThiSinhKhoiC::setDiemSu(float diemSu) {
	this->diemSu = diemSu;
}

float ThiSinhKhoiC::getDiemSu() {
	return diemSu;
} 

void ThiSinhKhoiC::setDiemDia(float diemDia) {
	this->diemDia = diemDia;
}

float ThiSinhKhoiC::getDiemDia() {
	return diemDia;
}

 void ThiSinhKhoiC::outPut() {
	ThiSinh::outPut();
	cout << "DiemToan: " << diemVan<< endl;
	cout << "DiemHoa: " << diemSu << endl;
	cout << "DiemLy: " << diemDia << endl;
} 

float ThiSinhKhoiC::tinhDTB() {
	return (diemVan+ diemDia + diemSu) / 3;
}

char ThiSinhKhoiC::getKhoi() {
	return 'C';
}
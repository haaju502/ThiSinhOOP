#include "ThiSinhKhoiB.h"
#include <bits/stdc++.h>
using namespace std;

ThiSinhKhoiB::ThiSinhKhoiB()
{
    diemToan = 0;
	diemSinh = 0;
	diemHoa = 0;
}

ThiSinhKhoiB::~ThiSinhKhoiB()
{
}

ThiSinhKhoiB::ThiSinhKhoiB(string sbd, string hoTen, string diaChi, float diemToan, float diemSinh, float diemHoa) : ThiSinh(sbd,hoTen,diaChi ) {
	this->diemToan = diemToan;
	this->diemSinh = diemSinh;
	this->diemHoa = diemHoa;
}

void ThiSinhKhoiB::setDiemToan(float diemToan) {
	this->diemToan = diemToan;
}

float ThiSinhKhoiB::getDiemToan() {
	return diemToan;
}

void ThiSinhKhoiB::setDiemHoa(float diemHoa) {
	this->diemHoa = diemHoa;
}

float ThiSinhKhoiB::getDiemHoa() {
	return diemHoa;
} 

void ThiSinhKhoiB::setDiemSinh(float diemSinh) {
	this->diemSinh = diemSinh;
}

float ThiSinhKhoiB::getDiemSinh() {
	return diemSinh;
}

void ThiSinhKhoiB::outPut() {
	ThiSinh::outPut();
	cout << "DiemToan: " << diemToan << endl;
	cout << "DiemSinh: " << diemSinh << endl;
	cout << "DiemHoa: " << diemHoa << endl;
} 

float ThiSinhKhoiB::tinhDTB() {
	return (diemToan + diemSinh + diemHoa) / 3;
	
}

char ThiSinhKhoiB::getKhoi() {
	return 'B';
}
#include "ThiSinhKhoiA.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ThiSinhKhoiA::ThiSinhKhoiA() : ThiSinh()
{
	diemToan = 0;
	diemLy = 0;
	diemHoa = 0;
}

ThiSinhKhoiA::~ThiSinhKhoiA()
{
}

ThiSinhKhoiA::ThiSinhKhoiA(string sbd, string hoTen, string diaChi, float diemToan, float diemLy, float diemHoa) : ThiSinh(sbd,hoTen,diaChi ) {
	this->diemToan = diemToan;
	this->diemLy = diemLy;
	this->diemHoa = diemHoa;
}

void ThiSinhKhoiA::setDiemToan(float diemToan) {
	this->diemToan = diemToan;
}

float ThiSinhKhoiA::getDiemToan() {
	return diemToan;
}

void ThiSinhKhoiA::setDiemHoa(float diemHoa) {
	this->diemHoa = diemHoa;
}

float ThiSinhKhoiA::getDiemHoa() {
	return diemHoa;
} 

void ThiSinhKhoiA::setDiemLy(float diemLy) {
	this->diemLy = diemLy;
}

float ThiSinhKhoiA::getDiemLy() {
	return diemLy;
}

 void ThiSinhKhoiA::outPut() {
	ThiSinh::outPut();
	cout << "DiemToan: " << diemToan << endl;
	cout << "DiemHoa: " << diemHoa << endl;
	cout << "DiemLy: " << diemLy << endl;
} 

float ThiSinhKhoiA::tinhDTB() {
	return (diemToan + diemLy + diemHoa) / 3;
}

char ThiSinhKhoiA::getKhoi() {
	return 'A';
}
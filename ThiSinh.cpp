#include "ThiSinh.h"
#include <iostream>

ThiSinh::ThiSinh()

{
	sbd = "";
	hoTen = "";
	diaChi = "";
}

ThiSinh::~ThiSinh()
{
}

ThiSinh::ThiSinh(string sbd, string hoTen, string diaChi) {
	this->sbd = sbd;
	this->hoTen = hoTen;
	this->diaChi = diaChi;
}

string ThiSinh::getSBD()
{
    return this->sbd;
}
void ThiSinh::setSBD(string sbd)
{
    if (sbd.size() > 0)
    {
        this->sbd = sbd;
    }
}

string ThiSinh::getHoTen()
{
    return this->hoTen;
}

void ThiSinh::setHoTen(string hoTen)
{
    if (hoTen.size() > 0)
    {
        this->hoTen = hoTen;
    }
}

string ThiSinh::getDiaChi()
{
    return this->diaChi;
}

void ThiSinh::setDiaChi(string diaChi)
{
    if (diaChi.size() > 0)
    {
        this->diaChi = diaChi;
    }
}

void ThiSinh::outPut()
{
	cout << "SoBD: " << sbd ;
	cout << ", HoTen: " << hoTen;
	cout << ", DiaChi: " << diaChi;
}

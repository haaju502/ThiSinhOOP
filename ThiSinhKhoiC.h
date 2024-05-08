#ifndef THISINHKHOIC_H
#define THISINHKHOIC_H

#include "ThiSinh.h"

class ThiSinhKhoiC : public ThiSinh
{
	private:
		float diemVan;
		float diemSu;
		float diemDia;
	public:
		ThiSinhKhoiC();
		ThiSinhKhoiC(string sbd, string hoTen, string diaChi, float diemVan, float diemSu, float diemDia);
		~ThiSinhKhoiC();
		float getDiemVan() ;
		void setDiemVan(float diemVan);
		float getDiemSu();
		void setDiemSu(float diemSu);
		float getDiemDia();
		void setDiemDia(float diemDia);
		void outPut();
		float tinhDTB();  
		char getKhoi();
};

#endif
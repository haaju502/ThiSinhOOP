#ifndef THISINHKHOIA_H
#define THISINHKHOIA_H
#include <bits/stdc++.h>
#include "ThiSinh.h"

class ThiSinhKhoiA : public ThiSinh
{
	private:
		float diemToan;
		float diemLy;
		float diemHoa;
	public:
		ThiSinhKhoiA();
		ThiSinhKhoiA(string sbd, string hoTen, string diaChi, float diemToan, float diemLy, float diemHoa);
		~ThiSinhKhoiA();
		float getDiemToan() ;
		void setDiemToan(float diemToan);
		float getDiemLy();
		void setDiemLy(float diemLy);
		float getDiemHoa();
		void setDiemHoa(float diemHoa);
		void outPut();
		float tinhDTB();   
		char getKhoi();
};

#endif
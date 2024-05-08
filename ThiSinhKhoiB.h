#ifndef THISINHKHOIB_H
#define THISINHKHOIB_H

#include "ThiSinh.h"

class ThiSinhKhoiB : public ThiSinh
{
	private:
		float diemToan;
		float diemSinh;
		float diemHoa;
	public:
		ThiSinhKhoiB();
		ThiSinhKhoiB(string sbd, string hoTen, string diaChi, float diemToan, float diemSinh, float diemHoa);
		~ThiSinhKhoiB();
		float getDiemToan() ;
		void setDiemToan(float diemToan);
		float getDiemSinh();
		void setDiemSinh(float diemLy);
		float getDiemHoa();
		void setDiemHoa(float diemHoa);
		void outPut();
		float tinhDTB();   
		char getKhoi();
};

#endif
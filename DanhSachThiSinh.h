#ifndef DANHSACHTHISINH_H
#define DANHSACHTHISINH_H
#include <bits/stdc++.h> 
#include "ThiSinh.h"
using namespace std;
class DanhSachThiSinh
{
	private:
		vector<ThiSinh*> danhSach;
	public:
		DanhSachThiSinh();
		~DanhSachThiSinh();
		void ThemThiSinh(ThiSinh* ts);
		void XoaThiSinh(ThiSinh *ts);
		void inThongTin();
		void sort();
		//bool SoSanh(ThiSinh* ts1, ThiSinh* ts2);
		
};

#endif
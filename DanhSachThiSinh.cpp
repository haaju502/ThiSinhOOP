#include "DanhSachThiSinh.h"
#include <bits/stdc++.h>
using namespace std;
DanhSachThiSinh::DanhSachThiSinh()
{
}


void DanhSachThiSinh::ThemThiSinh(ThiSinh* ts) {
	danhSach.push_back(ts);
}

void DanhSachThiSinh::XoaThiSinh(ThiSinh* ts) {
	for (auto it = danhSach.begin(); it != danhSach.end(); ++it) {
		if (*it == ts) {
			danhSach.erase(it);
			break; 
		}
	}
}

void DanhSachThiSinh::inThongTin() {
	for (ThiSinh* ts: danhSach) {
		ts->outPut();
		cout << endl;
	}
}

void DanhSachThiSinh::sort()
{
	for (int i = 0; i < danhSach.size() - 1; i++) {
		for(int j = 0; j < danhSach.size() - i - 1; j++) {
			if (danhSach[j]->getKhoi() > danhSach[j+1]->getKhoi()) {
				swap(danhSach[j], danhSach[j+1]);
			} else if(danhSach[j]->getKhoi() == danhSach[j+1]->getKhoi()) {
				if (danhSach[j]->tinhDTB() < danhSach[j+1]->tinhDTB()) {
					swap(danhSach[j], danhSach[j+1]);
				}
			}
		}
	}
 } 

DanhSachThiSinh::~DanhSachThiSinh()
{
	for(ThiSinh* ts:danhSach) {
		delete ts;
	}
}



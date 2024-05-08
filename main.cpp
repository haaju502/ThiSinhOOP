#include <bits/stdc++.h>
#include "DanhSachThiSinh.h"
#include "ThiSinhKhoiA.h"
#include "ThiSinhKhoiB.h"
#include "ThiSinhKhoiC.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DanhSachThiSinh ds;
    ThiSinh* ts1 = new ThiSinhKhoiB("001", "Nguyen Van B", "Ha Noi", 10, 10, 9.0);
    ThiSinh* ts2 = new ThiSinhKhoiA("002", "Tran Thi A", "Ho Chi Minh", 10.0,10.0,10.0);
    ThiSinh* ts4 = new ThiSinhKhoiC("004", "Le Van C", "Da Nang", 6.5, 8.5, 7.0);
    ThiSinh* ts5 = new ThiSinhKhoiB("005", "Le Van B2", "Da Nang", 10, 8.5, 7.0);
    ThiSinh* ts6 = new ThiSinhKhoiC("006", "Le Van C2", "Da Nang", 10, 10, 7.0); 
    
    ds.ThemThiSinh(ts1);
    ds.ThemThiSinh(ts2);
    ds.ThemThiSinh(ts4);
    ds.ThemThiSinh(ts5);
    ds.ThemThiSinh(ts6);
    //ds.XoaThiSinh(ts2); 
    
    ds.sort();
    ds.inThongTin();
	return 0;
}
#ifndef THISINH_H
#define THISINH_H
#include <string>
using namespace std;
class ThiSinh
{
	private:
		string sbd;
		string hoTen;
		string diaChi;
	public:
		ThiSinh();
		ThiSinh(string sbd, string hoTen, string diaChi);
		~ThiSinh();
		void setSBD(string sbd) ;
		string getSBD();
		void setHoTen(string hoten);
		string getHoTen();
		void setDiaChi(string diaChi);
	    string getDiaChi();
		virtual void outPut();
		virtual float tinhDTB() = 0;
		virtual char getKhoi() = 0;
};

#endif
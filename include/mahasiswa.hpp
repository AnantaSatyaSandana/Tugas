#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk, int semesterke, int skslulus);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	std::string getNRP();
	std::string getDepartemen();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

class matakuliah{
private:
	std::string namamatkul;
	std::string kodematkul;
	int bobotmatkul;
	int semmatkul;
	
public:
	matakuliah(std::string namamatkul, std::string kodematkul, int bobotmatkul, int semmatkul);


	std::string getnamamatkul();

	
	std::string getkodematkul();

	 void setbobotmatkul (int bobotmatkul);
	 int getbobotmatkul();
	 
	 void setsemmatkul (int semmatkul);
	 int getsemmatkul();

};
#endif

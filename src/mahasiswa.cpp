#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"


mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
				std::string nrp, std::string departemen, int tahunmasuk, 
				int semesterke , int skslulus)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), semesterke(semesterke) 
{
	this->ipk = 0.0;
	this->semesterke = semesterke;
	this->skslulus = skslulus;

	this->ips = std::vector<float>(14,0);
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

std::string mahasiswa::getNRP()
{
	return this->nrp;
}

std::string mahasiswa::getDepartemen()
{
	return this->departemen;
}

void mahasiswa::hitungIPK()
{
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}

matakuliah::matakuliah(std::string namamatkul, std::string kodematkul, int bobotmatkul, int semmatkul)

{
	this->bobotmatkul = bobotmatkul;
	this->namamatkul = namamatkul;
	this->kodematkul = kodematkul;
	this->semmatkul = semmatkul;
}

void matakuliah::setbobotmatkul(int bobotmatkul)
{
	this->bobotmatkul = bobotmatkul;
}

void matakuliah::setsemmatkul(int semmatkul)
{
	this->semmatkul = semmatkul;
}

int matakuliah::getbobotmatkul()
{
	return this->bobotmatkul;
}

std::string matakuliah::getnamamatkul()
{
	return this->namamatkul;
}

std::string matakuliah::getkodematkul()
{
	return this->kodematkul;
}

int matakuliah::getsemmatkul()
{
	return this->semmatkul;
}
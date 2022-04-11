#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas Penyakit Gangguan Anak Nakal   " << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				string id, nama, nrp, departemen;
				int dd, mm, yy, tahunmasuk, semesterke, skslulus;
				cout << "Masukkan id			: ";
					cin >> id;
				cout << "Masukkan nama			: ";
					cin >> nama;
				cout << "Masukkan tgl lahir		: ";
					cin >> dd;
				cout << "Masukkan bln lahir		: ";
					cin >> mm;
				cout << "Masukkan thn lahir		: ";
					cin >> yy;
				cout << "Masukkan nrp			: ";
					cin >> nrp;
				cout << "Masukkan departemen		: ";
					cin >> departemen;
				cout << "Masukkan tahun masuk		: ";
					cin >> tahunmasuk;
				cout << "Semester Ke			: ";
					cin >> semesterke;
				cout << "Masukkan skslulus	 	: ";
					cin >> skslulus;
				

				mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
					recMhs.push_back(mhs);

			}
				break;
			case 2:
				{
					string id, nama, npp, departemen;
					int dd, mm, yy, pendidikan;
					cout << "Masukkan id			: ";
					cin >> id;
					cout << "Masukkan nama			: ";
					cin >> nama;
					cout << "Masukkan tgl lahir		: ";
					cin >> dd;
					cout << "Masukkan bln lahir		: ";
					cin >> mm;
					cout << "Masukkan thn lahir		: ";
					cin >> yy;
					cout << "Masukkan npp			: ";
					cin >> npp;
					cout << "Masukkan departemen		: ";
					cin >> departemen;
					cout << "Masukkan pendidikan		: ";
					cin >> pendidikan;

					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					string id, nama, npp, unit;
					int dd, mm, yy;
					cout << "Masukkan id		: ";
					cin >> id;
					cout << "Masukkan nama		: ";
					cin >> nama;
					cout << "Masukkan tgl lahir	: ";
					cin >> dd;
					cout << "Masukkan bln lahir	: ";
					cin >> mm;
					cout << "Masukkan thn lahir	: ";
					cin >> yy;
					cout << "Masukkan npp		: ";
					cin >> npp;
					cout << "Masukkan unit		: ";
					cin >> unit;

					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;
			case 4:
				{
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "-----------------------------------------------" << endl;
						cout << "Nama		: " << recMhs[i].getNama() << endl;
						cout << "Tgl lahir	: " << recMhs[i].getTglLahir();
						cout << "-" << recMhs[i].getBulanLahir();
						cout << "-" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP		: " << recMhs[i].getNRP() << endl;
						cout << "Departemen	: " << recMhs[i].getDepartemen() << endl << endl;
						cout << "Semester	: " << recMhs[i].getSemester() << endl;
						cout << "SKSLulus	: " << recMhs[i].getSKSLulus() << endl;
						
					}
				}
				break;
			case 5:
				{
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "-----------------------------------------------" << endl;
						cout << "Nama		: " << recDosen[i].getNama() << endl;
						cout << "Tgl lahir	: " << recDosen[i].getTglLahir();
						cout << "-" << recDosen[i].getBulanLahir();
						cout << "-" << recDosen[i].getTahunLahir() << endl;
						cout << "NRP		: " << recDosen[i].getNPP() << endl;
						cout << "Pendidikan	: " << recDosen[i].getPendidikan() << endl;
						cout << "Departemen	: " << recDosen[i].getDepartemen() << endl << endl;
					}
				}
				break;
			case 6:
				{
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "-----------------------------------------------" << endl;
						cout << "Nama		: " << recTendik[i].getNama() << endl;
						cout << "Tgl lahir	: " << recTendik[i].getTglLahir();
						cout << "-" << recTendik[i].getBulanLahir();
						cout << "-" << recTendik[i].getTahunLahir() << endl;
						cout << "NRP		: " << recTendik[i].getNPP() << endl;
						cout << "Unit		: " << recTendik[i].getUnit() << endl;
					}
				}
				break;
		}
	}

	return 0;
}

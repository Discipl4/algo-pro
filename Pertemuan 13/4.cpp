#include <iostream>
#include <iomanip>

using namespace std;

typedef struct Mahasiswa
{
    string nim;
    string nama;
    string jurusan;
    int tahun_lulus;
} mhs;

int main()
{
    mhs arr[4];

    arr[0].nim = "A11.2020.01234";
    arr[0].nama = "Andi";
    arr[0].jurusan = "Broadcasting\t\t";
    arr[0].tahun_lulus = 2023;

    arr[1].nim = "A11.2010.01234";
    arr[1].nama = "Budi";
    arr[1].jurusan = "Sistem Informasi\t";
    arr[1].tahun_lulus = 2013;

    arr[2].nim = "A11.2000.01234";
    arr[2].nama = "Ali";
    arr[2].jurusan = "DKV\t\t\t";
    arr[2].tahun_lulus = 2003;

    arr[3].nim = "A11.1990.01234";
    arr[3].nama = "Siti";
    arr[3].jurusan = "Kesehatan\t\t";
    arr[3].tahun_lulus = 1993;

    cout << " ----------------------------------------------------------------------------------------" << endl;
    cout << " |\tNIM\t\t|\tNama\t|\tJurusan\t\t |\tTahun Lulus\t|" << endl;
    cout << " ----------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << " | " << arr[i].nim << "\t| ";
        cout << arr[i].nama << "\t\t| ";
        cout << arr[i].jurusan << " | ";
        cout << arr[i].tahun_lulus << "\t\t\t| ";
        cout << endl;
    }

    cout << " ----------------------------------------------------------------------------------------" << endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

struct Rumus
{
    private:
        float pi = 22.0 / 7.0;

    public:
        int panjang;
        int lebar;
        int jari;
        int tinggi;

        int luasPersegiPanjang()
        {
            return panjang * lebar;
        }

        float luasLingkaran()
        {
            return pi * pow (jari, 2);
        }

        float volumeKerucut()
        {

            return (pi * pow (jari, 2) * tinggi) / 3;
        }

        float volumeBola()
        {
            return (4 * pi * pow (jari, 3)) / 3;
        }
};

int main()
{
    struct Rumus rumus;

    cout << "Panjang\t\t= ";
    cin >> rumus.panjang;
    cout << "Lebar\t\t= ";
    cin >> rumus.lebar;
    cout << "Jari-jari\t= ";
    cin >> rumus.jari;
    cout << "Tinggi\t\t= ";
    cin >> rumus.tinggi;

    cout << "==============================================================\n";

    cout << "Luas Persegi Panjang\t= " << rumus.luasPersegiPanjang() << endl;
    printf("Luas Lingkaran\t\t= %.2f\n", rumus.luasLingkaran());
    printf("Volume Kerucut\t\t= %.2f\n", rumus.volumeKerucut());
    printf("Volume Bola\t\t= %.2f\n", rumus.volumeBola());

    return 0;
}

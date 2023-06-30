#include <iostream>

using namespace std;

struct Sepeda
{
    string merk = "Polygon";
    string type = "Sepeda Gunung";
    int tahun = 2013;
    string harga = "2.000.000";
};

int main()
{
    Sepeda sepeda;

    cout << "Merk\t= " << sepeda.merk << endl;
    cout << "Type\t= " << sepeda.type << endl;
    cout << "Tahun\t= " << sepeda.tahun << endl;
    cout << "Harga\t= " << sepeda.harga << endl;

    return 0;
}

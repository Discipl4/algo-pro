#include <iostream>

using namespace std;

typedef struct Sepeda
{
    string merk;
    string type;
    int tahun;
    string harga;
} Sepeda;

int main()
{
    Sepeda spd = {"0", "0"};
    Sepeda *ptr; 
    ptr = &spd;

    ptr -> merk = "Polygon";
    ptr -> type = "Sepeda Gunung";
    ptr -> tahun = 2013;
    ptr -> harga = "2.000.000";

    cout << "Merk\t= " << ptr -> merk << endl;
    cout << "Type\t= " << ptr -> type << endl;
    cout << "Tahun\t= " << ptr -> tahun << endl;
    cout << "Harga\t= " << ptr -> harga << endl;

    return 0;
}

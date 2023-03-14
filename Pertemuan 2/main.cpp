/*
    Nama      : Gagah Syuja Saka Abdullah
    NIM       : A11.2022.14259
    KELOMPOK  : A11.4207
*/

#include <iostream>

using namespace std;

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int total(int arr[], int index);
int rata(int arr[], int index);

int main()
{
    int a = 8;
    int b = 5;
    int ray[5] = {1, 3, 5, 7, 9};

    cout << "Pertambahan = " << tambah(a, b) << endl;
    cout << "Pengurangan = " << kurang(a, b) << endl;
    cout << "Perkalian = " << kali(a, b) << endl;
    cout << "Total = " << total(ray, 5) << endl;
    cout << "Rata-rata = " << rata(ray, 5) << endl;

    return 0;
}

int tambah(int a, int b)
{
    return a + b;
}

int kurang(int a, int b)
{
    return a - b;
}

int kali(int a, int b)
{
    return a * b;
}

int total(int arr[], int index)
{
    int temp = 0;

    for (int i = 0; i < index; i++)
    {
        temp += arr[i];
    }

    return temp;
}

int rata(int arr[], int index)
{
    int temp = 0;

    for (int i = 0; i < index; i++)
    {
        temp += arr[i];
    }

    return temp / index;
}

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
float rata(int arr[], int index);
void output(int arr[], int index);

int main()
{
    int a = 8;
    int b = 5;
    int n = 5;
    int ray[n] = {1, 3, 5, 7, 8};

    cout << "Pertambahan " << a << " dengan "<< b << " = " << tambah(a, b) << endl;
    cout << "Pengurangan " << a << " dengan "<< b << " = " << kurang(a, b) << endl;
    cout << "Perkalian " << a << " dengan "<< b << " = " << kali(a, b) << endl;
    cout << "Total dari {";
    output(ray, n);
    cout << "} = " << total(ray, 5) << endl;
    cout << "Rata-rata dari {";
    output(ray, n);
    cout << "} = " << rata(ray, 5) << endl;

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

float rata(int arr[], int index)
{
    float temp = 0;

    for (int i = 0; i < index; i++)
    {
        temp += arr[i];
    }

    return temp / index;
}

void output(int arr[], int index)
{
    for (int i = 0; i < index; i++)
    {
        cout << arr[i];

        if (i != index - 1)
        {
            cout << ", ";
        }
    }
}

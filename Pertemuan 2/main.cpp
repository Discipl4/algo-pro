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
void inputArray(int arr[], int index);
void output(int arr[], int index);

int main()
{
    int a;
    int b;
    int n;

    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;
    cout << "Masukkan jumlah array : ";
    cin >> n;

    int ray[n];
    cout << "Masukkan anggota array (dipisahkan dengan spasi) : ";
    inputArray(ray, n);

    cout << endl;

    cout << a << " + "<< b << " = " << tambah(a, b) << endl;
    cout << a << " - "<< b << " = " << kurang(a, b) << endl;
    cout << a << " x "<< b << " = " << kali(a, b) << endl;
    cout << "Total dari {";
    output(ray, n);
    cout << "} = " << total(ray, n) << endl;
    cout << "Rata-rata dari {";
    output(ray, n);
    cout << "} = " << rata(ray, n) << endl;

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

void inputArray(int arr[], int index)
{
    for (int i = 0; i < index; i++)
    {
        cin >> arr[i];
    }
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

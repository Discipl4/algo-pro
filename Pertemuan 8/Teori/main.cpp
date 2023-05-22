#include <iostream>

using namespace std;

void title();
int penjumlahan(int num);
int pengurangan(int num);
int perkalian(int num);
int pembagian(int num);
int pangkat(int base, int expo);
int faktorial(int num);
int fibonacci(int num);
void choice(int num);

int main()
{
    int num;

    title();
    cout << "Your choice : ";
    cin >> num;
    choice(num);

    return 0;
}

void title()
{
    cout << "#####################################" << endl;
    cout << "             Pertemuan 4             " << endl;
    cout << "#####################################" << endl;

    cout << "(1) Penjumlahan" << endl;
    cout << "(2) Pengurangan" << endl;
    cout << "(3) Perkalian" << endl;
    cout << "(4) Pembagian" << endl;
    cout << "(5) Fibonacci" << endl;
    cout << "(6) Faktorial" << endl;
    cout << "(7) Pangkat?" << endl;
    cout << "#####################################" << endl;
}

void input(int &num)
{
    cout << "Masukkan angka : ";
    cin >> num;
}

int penjumlahan(int num)
{
    if (num <= 1)
    {
        return num;
    }

    else
    {
        return num + penjumlahan(num - 1);
    }
}

int pengurangan(int num)
{
    if (num <= 1)
    {
        return num;
    }

    else
    {
        return num - pengurangan(num - 1);
    }
}

int perkalian(int num)
{
    if (num == 0)
    {
        return 1;
    }

    else
    {
        return num * perkalian(num - 1);
    }
}

int pembagian(int num)
{
    if (num == 0)
    {
        return 1;
    }

    else
    {
        return num / pembagian(num - 1);
    }
}

int pangkat(int base, int expo)
{
    if (expo == 1)
    {
        return base;
    }

    else if (expo > 1)
    {
        return base * pangkat(base, expo - 1);
    }

    else
    {
        return 1;
    }
}

int faktorial(int num)
{
    if (num > 1)
    {
        return num + faktorial(num - 1);
    }

    else
    {
        return 1;
    }
}

int fibonacci(int num)
{
    if (num > 1)
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

void choice(int num)
{
    switch (num)
    {
        case 1:
            input(num);
            cout << penjumlahan(num) << endl;
            break;

        case 2:
            input(num);
            cout << pengurangan(num) << endl;
            break;

        case 3:
            input(num);
            cout << perkalian(num) << endl;
            break;

        case 4:
            input(num);
            cout << pembagian(num) << endl;
            break;

        case 5:
            input(num);
            cout << fibonacci(num) << endl;
            break;

        case 6:
            input(num);
            cout << faktorial(num) << endl;
            break;

        case 7:
            int base, expo;
            cout << "Base : ";
            cin >> base;
            cout << "Expo : ";
            cin >> expo;
            cout << pangkat(base, expo) << endl;
            break;
    }
}

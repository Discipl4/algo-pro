/*
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    Nama      : Gagah Syuja Saka Abdullah
    NIM       : A11.2022.14259
    Kelompok  : A11.4207

    @@@@@@@@@@@@ PERTEMUAN 8 @@@@@@@@@@@@
*/

#include <iostream>

using namespace std;

void title();
void space();
void clear();
void input(int &a, int &b);
void inputOne(int &num);
int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian(int a, int b);
int pembagian(int a, int b);
int pangkat(int base, int expo);
int faktorial(int num);
int fibonacci(int num);
void fibonacciDetailed(int num);
void choice(int num);

int main()
{
    int num;
    char omt;
    bool exec = true;

    while (exec)
    {
        title();
        cout << "Your choice : ";
        cin >> num;
        space();
        choice(num);
        space();
        cout << "One more time ( y | n ) ? ";
        cin >> omt;

        switch (omt)
        {
            case 'y':
                exec = true;
                clear();
                break;

            case 'Y':
                exec = true;
                clear();
                break;

            case 'n':
                exec = false;
                break;

            case 'N':
                exec = false;
                break;
        }
    }

    return 0;
}

void title()
{
    cout << "#####################################" << endl;
    cout << "             Pertemuan 8             " << endl;
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

void space()
{
    cout << "#####################################" << endl;
}

void clear()
{
    #if __linux__
        system("clear");

    #elif _WIN32
        system("cls");

    #endif
}

void input(int &a, int &b)
{
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;
}

void inputOne(int &num)
{
    cout << "Masukkan angka : ";
    cin >> num;
}

int penjumlahan(int a, int b)
{
    if (a > 0)
    {
        return 1 + penjumlahan(a - 1, b);
    }

    else if (b > 0)
    {
        return 1 + penjumlahan(a, b - 1);
    }

    else
    {
        return 0;
    }
}

int pengurangan(int a, int b)
{
    if (a > b)
    {
        return 1 + pengurangan(a - 1, b);
    }

    else if (b > a)
    {
        return pengurangan(a, b - 1) - 1;
    }

    else
    {
        return 0;
    }
}

int perkalian(int a, int b)
{
    if (b > 0)
    {
        return a + perkalian(a, b - 1);
    }

    else
    {
        return 0;
    }
}

int pembagian(int a, int b)
{
    if (a > b)
    {
        return 1 + pembagian(a - b, b);
    }

    else
    {
        return 1;
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
        return num * faktorial(num - 1);
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

    else if (num == 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void fibonacciDetailed(int num)
{
    int result;
    int first = 1;
    int second = 0;

    for (int i = 0; i < num; i++)
    {
        result = first + second;
        first = second;
        second = result;

        if (i == num - 1)
        {
            cout << "(";
        }

        cout << result;

        if (i != num - 1)
        {
            cout << " + ";
        }
    }
    
    cout << ")" << endl;
}

void choice(int num)
{
    int a, b;

    switch (num)
    {
        case 1:
            input(a, b);
            cout << a << " + " << b << " = " << penjumlahan(a, b) << endl;
            break;

        case 2:
            input(a, b);
            cout << a << " - " << b << " = " << pengurangan(a, b) << endl;
            break;

        case 3:
            input(a, b);
            cout << a << " x " << b << " = " << perkalian(a, b) << endl;
            break;

        case 4:
            input(a, b);
            cout << a << " / " << b << " = " << pembagian(a, b) << endl;
            break;

        case 5:
            inputOne(num);
            cout << "F" << num << " = ";

            fibonacciDetailed(num);

            cout << "F" << num << " = " << fibonacci(num) << endl;
            break;

        case 6:
            inputOne(num);
            cout << num << "! = " << faktorial(num) << endl;
            break;

        case 7:
            int base, expo;
            cout << "Base : ";
            cin >> base;
            cout << "Exponent : ";
            cin >> expo;
            cout << base << "^" << expo << " = " << pangkat(base, expo) << endl;
            break;
    }
}

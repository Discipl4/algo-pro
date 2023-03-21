#include <iostream>

using namespace std;

bool isEven (int x);
bool isOdd (int x);
bool isFactor (int a, int b);
int maxN (int a, int b);
int minN (int a, int b);
int maxArray (int arr[], int len);
int minArray (int arr[], int len);
bool isFound (int x, int arr[], int len);
void swapN (int &a, int &b);
void title();
void inputOne(int &x);
void inputTwo(int &a, int &b);
void inputArr(int arr[], int &len);
void select(int choice, int x, int a, int b, int arr[], int len);
void space();

int main()
{
    int x, a, b, choice, len = 0;
    int arr[len];

    title();
    cout << "Your choice : ";
    cin >> choice;
    space();
    select(choice, x, a, b, arr, len);

    return 0;
}

bool isEven (int x)
{
    bool result;

    if (x % 2 == 0)
    {
        result = true;
    }

    return result;
}

bool isOdd (int x)
{
    bool result;

    if (x % 2 != 0)
    {
        result = true;
    }

    return result;
}

bool isFactor (int a, int b)
{
    bool result;

    if (b % a == 0)
    {
        result = true;
    }

    return result;
}

int maxN (int a, int b)
{
    int result;

    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }

    return result;
}

int minN (int a, int b)
{
    int result;

    if (a > b)
    {
        result = b;
    }
    else
    {
        result = a;
    }

    return result;
}

int maxArray (int arr[], int len)
{
    int temp = arr[0];

    for (int i = 0; i < len; i++)
    {
        temp = maxN (temp, arr[i]);
    }

    return temp;
}

int minArray (int arr[], int len)
{
    int temp = arr[0];

    for (int i = 0; i < len; i++)
    {
        temp = minN (temp, arr[i]);
    }

    return temp;
}

bool isFound (int x, int arr[], int len)
{
    bool result = false;

    for (int i = 0; i < len; i++)
    {
        if (x == arr[i])
        {
            result = true;
        }
    }

    return result;
}

void swapN (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void title()
{
    cout << "#####################################" << endl;
    cout << "             Pertemuan 4             " << endl;
    cout << "#####################################" << endl;

    cout << "(1) Is it even" << endl;
    cout << "(2) Is it odd" << endl;
    cout << "(3) Is <num> a factor of <num>" << endl;
    cout << "(4) Is <num> bigger than <num>" << endl;
    cout << "(5) Is <num smaller than <num>" << endl;
    cout << "(6) Largest in <array> " << endl;
    cout << "(7) Smallest in <array> " << endl;
    cout << "(8) Is there a <num> in <array>" << endl;
    cout << "(9) Swap <num> with <num>" << endl;
    cout << "#####################################" << endl;
}

void inputOne(int &x)
{
    cout << "Enter the number : ";
    cin >> x;
}

void inputTwo(int &a, int &b)
{
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
}

void inputArr(int arr[], int &len)
{
    cout << "Enter the number of element : \n> ";
    cin >> len;
    cout << "Enter the value separated by space :\n> ";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
}

void select(int choice, int x, int a, int b, int arr[], int len)
{
    switch (choice)
    {
        case 1:
            inputOne(x);
            space();
            if (isEven(x) == true)
            {
                cout << x << " is an even number";
            }
            else
            {
                cout << x << " is not an even number";
            }
            cout << endl;
            space();
            break;

        case 2:
            inputOne(x);
            space();
            if (isOdd(x) == true)
            {
                cout << x << " is an odd number";
            }
            else
            {
                cout << x << " is not an odd number";
            }
            cout << endl;
            space();
            break;

        case 3:
            inputTwo(a, b);
            space();
            if (isFactor(a, b) == true)
            {
                cout << a << " is a factor of " << b;
            }
            else
            {
                cout << a << " is not a factor of " << b;
            }
            cout << endl;
            space();
            break;

        case 4:
            inputTwo(a, b);
            space();
            cout << maxN(a, b) << " is larger" << endl;
            space();
            break;

        case 5:
            inputTwo(a, b);
            space();
            cout << minN(a, b) << " is smaller" << endl;
            space();
            break;

        case 6:
            inputArr(arr, len);
            space();
            cout << maxArray(arr, len) << " is the largest inside the array" << endl;
            space();
            break;

        case 7:
            inputArr(arr, len);
            space();
            cout << minArray(arr, len) << " is the smallest inside the array" << endl;
            space();
            break;

        case 8:
            cout << "Enter the number you are looking : ";
            cin >> x;
            inputArr(arr, len);
            space();
            if (isFound(x, arr, len) == true)
            {
                cout << x << " found";
            }
            else
            {
                cout << x << " not found";
            }
            cout << endl;
            space();
            break;

        case 9:
            inputTwo(a, b);
            space();

            cout << "Before : \tAfter :" << endl;
            cout << "A = " << a;
            swapN(a, b);
            cout << "\t\tA = " << a;
            swapN(a, b);
            cout << "\nB = " << b;
            swapN(a, b);
            cout << "\t\tB = " << b;
            cout << endl;

            space();
            break;

    }
}

void space()
{
    cout << "#####################################" << endl;
}

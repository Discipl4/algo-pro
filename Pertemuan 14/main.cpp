/*
    Nama    : Gagah Syuja Saka Abdullah
    NIM     : A11.2022.14259
    Kelas   : A11.4207
*/

#include <iostream>
#include <chrono>

using namespace std;

bool linearSearch (int arr[], int size, int num, int &space)
{
	int result = false;
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            result = true;
        }
    }

	space = sizeof(arr) + sizeof(size) + sizeof(num) + sizeof(i) + sizeof(result);

    return result;
}

bool sentinelSearch (int arr[], int size, int num, int &space)
{
	int last = arr[size - 1];
 
    arr[size - 1] = num;
    int i = 0;
 
    while (arr[i] != num)
	{
        i++;
 	}

    arr[size - 1] = last;

	space = sizeof(arr) + sizeof(size) + sizeof(num) + sizeof(i);
 
    if ((i < size - 1) || (arr[size - 1] == num))
	{
		return true;
	}

    else
	{
		return false;
	}
}

void selectionSort (int arr[], int size, int &space)
{
    int i;
    int min;
    int j;
    int temp;

    for (i = 0; i < size; i++)
    {
        min = i;

        for (j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

	space = sizeof(arr) + sizeof(size) + sizeof(i) + sizeof(j) + sizeof(min) + sizeof(temp);
}

void insertionSort (int arr[], int size, int &space)
{
    int i;
    int temp;

    for (i = 1; i < size; i++)
    {
        while (arr[i] < arr[i - 1] && i > 0)
        {
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;

            i--;
        }
    }

	space = sizeof(arr) + sizeof(size) + sizeof(i) + sizeof(temp);
}

void bubbleSort (int arr[], int size, int &space)
{
    int i;
    int j;
    int temp;

    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 

    space = sizeof(arr) + sizeof(size) + sizeof(i) + sizeof(j) + sizeof(temp);
}

void sortingTimeSpace (int arr[], int size, int &space, void (*sort) (int[], int, int&))
{
    auto start = chrono::steady_clock::now();

    int duplicate[size];

    copy (arr, arr + size, duplicate);

    sort(duplicate, size, space);

    cout << "Sorted : ";

    for (int i = 0; i < size; i++)
    {
        cout << duplicate[i] << " ";
    }

    auto end = chrono::steady_clock::now(); 

    cout << "\nTook " << chrono::duration <double, milli>(end - start).count() << " ms ";
    cout << "and " << space << " bytes\n" << endl;
}

void searchingTimeSpace (int arr[], int size, int num, int &space, bool (*search) (int[], int, int, int&))
{
    auto start = chrono::steady_clock::now();

    bool result = search (arr, size, num, space);

    if (result)
    {
        cout << num << " Found" << endl;
    }

    else
    {
        cout << num << " Not Found" << endl;
    }

    auto end = chrono::steady_clock::now(); 

    cout << "Took " << chrono::duration <double, milli>(end - start).count() << " ms ";
    cout << "and " << space << " bytes\n" << endl;
}

int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8, 7};
    int size = sizeof(arr) / sizeof(int);

	int space;

    int search = 9;

	cout << "------------------------------\n" << endl;

    cout << "Before : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\n";

    cout << "\t--- Bubble Sort ---" << endl;
    sortingTimeSpace (arr, size, space, &bubbleSort);

    cout << "\t--- Selection Sort ---" << endl;
    sortingTimeSpace (arr, size, space, &selectionSort);

    cout << "\t--- Insertion Sort ---" << endl;
    sortingTimeSpace (arr, size, space, &insertionSort);

	cout << "------------------------------\n" << endl;

	cout << "Searching for " << search << "\n\n";

    cout << "\t--- Linear Search ---" << endl;
    searchingTimeSpace (arr, size, search, space, &linearSearch);

    cout << "\t--- Sentinel Search ---" << endl;
    searchingTimeSpace (arr, size, search, space, &sentinelSearch);

    return 0;
}

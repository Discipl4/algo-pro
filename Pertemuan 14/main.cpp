#include <iostream>
#include <chrono>
#include <iterator>

using namespace std;

void selectionSort (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;

        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertionSort (int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        while (arr[i] < arr[i - 1] && i > 0)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;

            i--;
        }
    }
}

void bubbleSort (int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void timeAndSpace (int arr[], int size, void (*sort) (int[], int))
{
    auto start = chrono::steady_clock::now();

    int duplicate[size];

    copy (arr, arr + size, duplicate);

    sort(duplicate, size);

    auto end = chrono::steady_clock::now(); 

    cout << "Sorted : ";

    for (int i = 0; i < size; i++)
    {
        cout << duplicate[i] << " ";
    }

    cout << "\nTook " << chrono::duration <double, milli>(end - start).count() << " ms ";
    cout << "and " << sizeof(duplicate) + sizeof(size) + sizeof(start) + sizeof(end) << " bytes" << endl;

    cout << endl;
}

int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\n";

    cout << "\t--- Bubble Sort ---" << endl;
    timeAndSpace (arr, size, &bubbleSort);

    cout << "\t--- Selection Sort ---" << endl;
    timeAndSpace (arr, size, &selectionSort);

    cout << "\t--- Insertion Sort ---" << endl;
    timeAndSpace (arr, size, &insertionSort);

    return 0;
}

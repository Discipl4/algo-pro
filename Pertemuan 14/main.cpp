#include <iostream>
#include <chrono>

using namespace std;

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

int main()
{
    int arr[] = {4, 7, 3, 8, 2, 9, 3, 4, 8, 7};
    int size = sizeof(arr) / sizeof(int);
    auto start = chrono::steady_clock::now();

    bubbleSort (arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    auto end = chrono::steady_clock::now(); 

    cout << "Took : " << chrono::duration <double, milli>(end - start).count() << " ms" << endl;
    cout << "Space : " << sizeof(arr) + sizeof(size) + sizeof(start) + sizeof(end) << " bytes" << endl;

    return 0;
}

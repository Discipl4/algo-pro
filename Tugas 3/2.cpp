/*
     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

     Nama      : Gagah Syuja Saka Abdullah
     NIM       : A11.2022.14259
     Kelompok  : A11.4207

     @@@@@@@@@@@@@@ TUGAS 3 @@@@@@@@@@@@@@
 */

#include <iostream>

using namespace std;

void shellSort(int arr[], int len);

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

void printArr(int arr[], int len);

int main()
{
    int arrShell[] = {6, 4, 7, 4, 8, 1, 9, 1, 1};
    int arrMerge[] = {3, 9, 2, 8, 4, 7, 5, 9, 8};

    int lenShell = sizeof(arrShell) / sizeof(int);
    int lenMerge = sizeof(arrMerge) / sizeof(int);

    cout << "\tShellSort" << endl << "Before : ";
    printArr(arrShell, lenShell);
    cout << "After : ";
    shellSort(arrShell, lenShell);
    printArr(arrShell, lenShell);

    cout << endl;

    cout << "\tMergeSort" << endl << "Before : ";
    printArr(arrMerge, lenMerge);
    mergeSort(arrMerge, 0, lenMerge - 1);
    cout << "After : ";
    printArr(arrMerge, lenMerge);

    return 0;
}

void shellSort(int arr[], int len)
{
    int step = len / 2;

    while (step > 0)
    {
        for (int i = step; i < len; i++)
        {
            while (arr[i] > arr[i - step] && i - step >= 0)
            {
                int temp = arr[i];
                arr[i] = arr[i - step];
                arr[i - step] = temp;
                
                i -= step;
            }
        }

        step /= 2;
    }
}

void merge(int arr[], int left, int mid, int right)
{
    int L = mid - left + 1;
    int R = right - mid;

    int arrL[L], arrR[R];

    for (int i = 0; i < L; i++)
        arrL[i] = arr[i + left];

    for (int i = 0; i < R; i++)
        arrR[i] = arr[i + mid + 1];

    int i = 0;
    int j = 0; 
    int k = left;

    while (i < L && j < R)
    {
        if (arrL[i] > arrR[j])
        {
            arr[k] = arrL[i];
            i++;
        }

        else
        {
            arr[k] = arrR[j];
            j++;
        }

        k++;
    }

    while (i < L)
    {
        arr[k] = arrL[i];
        i++;
        k++;
    }

    while (j < R)
    {
        arr[k] = arrR[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

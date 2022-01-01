#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[min_ind], arr[i]);
    }
}

int main()
{
    int arr[] = {6, 3, 8, 2, 10};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
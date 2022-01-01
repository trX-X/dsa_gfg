#include <iostream>
using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//         for (int j = 0; j < n - i - 1; j++)
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
// }

//Efficient solution, which dosent run if array is sorted or got sorted in the loop
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
            break;
    }
}

int main()
{
    int arr[] = {6, 3, 8, 2, 10};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
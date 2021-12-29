#include <iostream>
using namespace std;

int minElement(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == arr[high])
            high--;
        else if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[high];
}

int main(void)
{
    int arr[] = {5, 6, 1, 2, 3, 4};
    cout << minElement(arr, 6);
    return 0;
}
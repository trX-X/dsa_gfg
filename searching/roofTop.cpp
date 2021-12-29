#include <iostream>
using namespace std;

int maxStep(int A[], int N)
{
    int count = 0, maximum = 0;
    for (int i = 1; i < N; i++)
    {
        if (A[i] > A[i - 1])
            count++;
        else {
            maximum = max(maximum, count);
            count=0;
        }    
    }
    return max(maximum,count);
}

int main(void)
{
    int arr[] = {1, 2};
    cout << maxStep(arr, 2);
    return 0;
}
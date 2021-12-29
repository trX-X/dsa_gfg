#include <iostream>
#include <vector>
using namespace std;

vector<int> twoRepeated(int arr[], int N)
{
    vector<int> num;
    int count[N + 3] = {0};
    for (int i = 0; i < N + 2; i++)
    {
        count[arr[i]] += 1;
        if (count[arr[i]] == 2)
        {
            num.push_back(arr[i]);
        }
    }
    return num;
}

int main(void)
{
    int arr[] = {1, 2, 1, 3, 4, 3};
    twoRepeated(arr, 6);
    return 0;
}
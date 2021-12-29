// Given an integer array representing the heights of N buildings, the task is to delete N-2
// buildings such that the water that can be trapped between the remaining two building is maximum.
// Note: The total water trapped between two buildings is gap between them (number of buildings removed)
// multiplied by height of the smaller building.

// Input:
// N = 6
// height[] = {2,1,3,4,6,5}
// Output: 8
// Explanation: The heights are 2 1 3 4 6 5.
// So we choose the following buildings
// 2 1 3 4 6 5  and remove others. So total
// removed buildings is equal to 4, now the
// height of smaller one is 2. So answer is
// 2 * removed buildings = 2*4 = 8. There is
// no answer greater than this.

// Input:
// N = 2
// height[] = {2,1}
// Output: 0
// Explanation: The heights are 2 1. So we
// choose the following buildings 2 5  and
// remove others. But there is no other
// buildings to be removed so total removed
// = 0.  Now the height of smaller one is 2.
// So answer is 2 * removed buildings = 2*0
// = 0.

#include <bits/stdc++.h>
using namespace std;

int maxWater(int height[], int n)
{
    int maxm = 0, first = 0, last = n - 1;
    while (first < last)
    {
        if (height[first] < height[last])
        {
            maxm = max(maxm, (last - first - 1) * height[first]);
            first++;
        }
        else if (height[first] > height[last])
        {
            maxm = max(maxm, (last - first - 1) * height[last]);
            last--;
        }
        else
        {
            maxm = max(maxm, (last - first - 1) * height[first]);
            first++;
            last--;
        }
    }
    return maxm;
}

int main(void)
{
    int arr[] = {2, 1, 3, 4, 6, 5};
    cout << maxWater(arr, 6);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//Segmentation fault
// int countOccurence(int arr[], int n, int k)
// {
//     int cArr[n];
//     memset(cArr, 0, sizeof(int)*n);
//     for (int i = 0; i < n; i++)
//         cArr[arr[i]]++;

//     int eCount = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (cArr[i] > (n / k))
//         {
//             eCount++;
//         }
//     }
//     return eCount;
// }

//Using map
int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int>m;
        int c=0;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(m[arr[i]]==n/k+1)c++;
        }
        
        return c;
    }

int main()
{
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    cout << countOccurence(arr, 8, 4);
    return 0;
}
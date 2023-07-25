#include <bits/stdc++.h>
using namespace std;

// Time complexity : (N*N)
// Space Complexity : O(1)
void bubble_sort(int n, vector<int> &arr)
{
    int k = n;
    while (k != 1)
    {
        for (int j = 0; j < k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        k--;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
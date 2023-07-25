#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(N*N)
// Space complexity : O(1)
void insertion(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int k = i;
        while (arr[j] > arr[k] && j >= 0)
        {
            swap(arr[j], arr[k]);
            j--;
            k--;
        }
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
    insertion(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
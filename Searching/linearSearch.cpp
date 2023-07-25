#include<bits/stdc++.h>
using namespace std;

// Time complexity : O(N)
// Space complexity : O(1)

int linear(int n,vector<int> &arr,int key)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = linear(n,arr,key);
    cout<<"The element found at the index : "<<ans<<endl;
    return 0;
}
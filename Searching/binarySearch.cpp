#include<bits/stdc++.h>
using namespace std;

// Time complexity : O(logN)
// Space complexity : O(1)
int binary(int n,vector<int> &arr,int &key)
{
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = binary(n,arr,key);
    cout<<"An element is found at the index : "<<ans<<endl;
    return 0;
}
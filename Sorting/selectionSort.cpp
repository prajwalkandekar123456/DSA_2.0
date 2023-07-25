#include<bits/stdc++.h>
using namespace std;

vector<int> selection(int n,vector<int> &arr)
{
    for(int i = 0;i<n-1;i++)
    {
            int mini =  i;
            for(int j = i;j<n;j++)
            {
                if(arr[j]<arr[mini])
                {
                    mini = j;
                }
            }
            swap(arr[i],arr[mini]);
        
    }
    return arr;
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
    vector<int> ans = selection(n,arr);
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
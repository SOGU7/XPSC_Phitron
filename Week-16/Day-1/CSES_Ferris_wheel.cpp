#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int i = 0, j = n-1;
    int count = n;
    while(i<j)
    {
        if(a[i]+a[j]<=m)
        {
            count--;
            i++;
            j--;
        }
        else j--;
    }
    cout<<count;

    return 0;
}
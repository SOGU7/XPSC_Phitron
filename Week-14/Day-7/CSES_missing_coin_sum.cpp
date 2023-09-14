#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[0]>1)
    {
        cout<<1<<"\n";
        return 0;
    }
    ll sum = 0;
    for(int i = 0;i<n;i++)
    {
        if(sum+1<a[i])
        {
            cout<<sum+1<<"\n";
            return 0;
        }
        sum+=a[i];
    }
    cout<<sum+1<<"\n";

    return 0;
}
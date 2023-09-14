#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    ll sum = 0;
    for(int i = 0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll ans = 1e18;
    for(int i = 0;i<(1<<n);i++)
    {
        ll temp = 0;
        for(int j = 0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            {
                temp+=a[j];
            }
        }
        ans = min(ans,abs(sum-temp-temp));
    }
    cout<<ans<<"\n";

    return 0;
}
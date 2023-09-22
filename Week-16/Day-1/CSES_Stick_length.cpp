#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll mid  = n/2;
    ll ans = 0;
    for(int i = 0;i<n;i++)
        ans+= abs(a[mid] - a[i]);
    cout<<ans<<"\n";

    return 0;
}
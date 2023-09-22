#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    map<ll,ll>mp;
    mp[0]++;
    ll sum = 0;
    ll ans = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=a[i];
        if(mp.find(sum-x)!= mp.end()) ans+=mp[sum-x];
        mp[sum]++;
    }
    cout<<ans<<"\n";
    return 0;
}
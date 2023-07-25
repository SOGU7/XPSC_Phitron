#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const ll MOD = 1e9+7;

void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(int i = 0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll sum = 0;
    ll prev = 1;
    ll temp = 0;
    for(int i = 1;i<=n;i++)
    {
        temp = (prev * mp[i])%MOD;
        sum = (sum+temp)%MOD;
        prev = temp;
    }
    cout<<sum<<"\n";

}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}
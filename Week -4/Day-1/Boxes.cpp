#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i =0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0) a[i]--;
    }
    ll mx = INT_MIN;
    map<ll,ll>mp;
    for(ll i =0;i<n;i++)
    {
        ll count = 0;
        while(a[i]>0)
        {
            a[i]/=2;
            count++;
        }
        mx = max(mx,count);
        mp[count]++;
    }
    ll ans = (mp[mx]/2)+1;
    cout<<ans<<"\n";
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
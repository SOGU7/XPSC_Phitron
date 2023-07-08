#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    map<ll,ll>mp;
    for(int i =0;i<n;i++) 
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a+0,a+n);
    ll count = 0;
    ll k;
    for(int i =0;i<n;i++)
    {
        k = a[i];
        if(mp[k*x]>0 && mp[k]>0)
        {
            mp[k*x]--;
            mp[k]--;
        }
    }
    for(int i =0;i<n;i++)
    {
        if(mp[a[i]]>0)
        {
            count+= mp[a[i]];
            mp[a[i]] = 0;
        }
    }
    cout<<count<<"\n";
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
#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,m,h;
    cin>>n>>m>>h;
    ll cap[n];
    ll b[m];
    for(ll i = 0;i<n;i++) cin>>cap[i];
    for(ll i =0;i<m;i++)
    {
        cin>>b[i];
        b[i]*= h;

    } 
    sort(cap+0,cap+n,greater<int>());
    sort(b+0,b+m,greater<int>());
    ll mini = min(n,m);
    ll ans1 = 0;
    ll ans = 0;
    for(ll i = 0;i<mini;i++)
    {
        if(b[i]>cap[i]) ans+=cap[i];
        else ans+=b[i]; 
    }
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
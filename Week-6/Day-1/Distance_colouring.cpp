#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const ll MOD = 1e9+7;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans = 1;
    for(int i =0;i<n;i++)
    {
        ans = (ans*k)%MOD;
        if(k>1) k--;
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
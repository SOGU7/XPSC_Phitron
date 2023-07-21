#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const ll MOD = 1000000007;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans = 1;
    for(ll i =0;i<k;i++)
    {
        ans = ans*n%MOD;
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
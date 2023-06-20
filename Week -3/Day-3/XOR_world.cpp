#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
ll xor_range(ll n)
{
    if(n%4 == 0) return n;
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n+1;
    if(n%4 == 3) return 0;
    return 0;
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll ans = xor_range(a-1)^xor_range(b);
    cout<<ans;

}

int main()
{
    fastread();
    solve();
     
    return 0;
}
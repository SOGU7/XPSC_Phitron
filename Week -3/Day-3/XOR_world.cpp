#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll ans = a;
    for(ll i =a+1;i<=b;i++)
    {
        ans = ans^i;
    }
    cout<<ans;

}

int main()
{
    fastread();
    solve();
     
    return 0;
}
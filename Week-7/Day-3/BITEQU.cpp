#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a = 1,b=2;
    ll c = 0,d =0;
    if(n == 0)
    {
        cout<<4<<" "<<6<<" "<<3<<" "<<7<<"\n";
        return;
    }
    for(ll i = 3;i<=1e7;i++)
    {
        ll ans = n^i;
        if(ans == i || ans<=2)
            continue;
        c = i;
        d = ans;
        break;
    }
    if(c == 0) cout<<-1<<"\n";
    else
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";

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
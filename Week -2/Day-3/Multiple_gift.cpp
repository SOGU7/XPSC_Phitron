#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll x,y;
    cin>>x>>y;
    ll count = 0;
    while(x<=y)
    {
        x*=2;
        count++;
    }
    cout<<count;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}
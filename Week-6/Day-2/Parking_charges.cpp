#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    int ans = x+(z-1)*y;
    cout<<ans<<"\n";
}

int main()
{
    fastread();
    solve();
     
    return 0;
}
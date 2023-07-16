#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    if((p+q+r)<s || (q+r+s)<p || (p+r+s)<q || (p+q+s)<r) cout<<"YES\n";
    else cout<<"NO\n";
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
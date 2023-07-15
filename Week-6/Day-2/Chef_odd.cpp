#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll extra_odd = (((n-2*k)/2)+((n-2*k)%2));
    if(2*k>n) cout<<"NO\n";
    else if(2*k == n) cout<<"YES\n";
    else
    {
        if(extra_odd & 1)
            cout<<"NO\n";
        else cout<<"YES\n";
    }
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
#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    for(ll i = 0;i<=10;i++)
    {
        if(pow(10,i)>n)
        {
            ll ans = pow(10,i-1);
            cout<<n-ans<<"\n";
            break;
        }
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
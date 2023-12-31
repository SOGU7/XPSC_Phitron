#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll count = 1e18;
    ll ans;
    for(ll i = 0;i*i<=a;i++)
    {
        if(b == 1 && i == 0) continue;
        ll c = a;
        ans = i;
        while(c)
        {
            c/=(b+i);
            ans++;
        }
        count = min(count,ans);
    }
    cout<<count<<"\n";
    
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
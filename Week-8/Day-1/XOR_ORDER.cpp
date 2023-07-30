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
    ll a,b,c;
    cin>>a>>b>>c;
    ll x = 0;
    bool flag = true;
    if(a==b || b==c || a == c)
    {
        cout<<-1<<"\n";
        return;
    }
    if(a<b && b<c)
        cout<<0<<"\n";
    else
    {
        ll x = 0;
        for(ll i = 30;i>=0;i--)
        {
            ll cur = (1<<i);
            if((a&cur) &&!(b&cur))
            {
                x = i;
                break;
            }
        }
        ll ans = (1<<x);
        for(ll i = 30;i>=0;i--)
        {
            ll cur = (1<<i);
            if((b&cur) &&!(c&cur))
            {
                x = i;
                break;
            }
        }
        ans|=(1<<x);
        if((a^ans)<(b^ans)  && (b^ans)<(c^ans))
        {
	        cout<<ans<<"\n";
	    }
	    else cout<<"-1\n";
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
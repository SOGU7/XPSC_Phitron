#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int sz = 1e7+1;
vector<ll>visited(sz,false);

void sieve()
{
    visited[0] = true;
    visited[1] = true;
    for(int i = 4;i<sz;i+=2)
        visited[i] = true;
    for(int i = 3;i*i<=sz;i+=2)
    {
        if(!visited[i])
        {
            for(int j = i*i;j<sz;j+=2*i)
            {
                visited[j] = true;
            }
        }

    }
}

void solve()
{
    ll n;
    cin>>n;
    sieve();
    while(n--)
    {
        ll x;
        cin>>x;
        ll ans = sqrt(x);
        if(!visited[ans] && ans*ans == x)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}

int main()
{
    fastread();
    int t = 1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}
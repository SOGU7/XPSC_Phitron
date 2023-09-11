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
    int n;
    cin>>n;
    vector<int>a(n+1);
    ll sum = 0;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    } 
    ll ans = 1;
    ll cur = 0;
    for(int i = 1;i<n;i++)
    {
        cur+= a[i];
        sum-=a[i];
        ll gcd = __gcd(cur,sum);
        ans = max(ans,gcd);
    }
    cout<<ans<<"\n";
    
    
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
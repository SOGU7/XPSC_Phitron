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
    ll n,h;
    cin>>n>>h;
    vector<ll>a(n);
    for(int i = 0;i<n;i++)
        cin>>a[i];
    ll l = 0, r = 1e18;
    while(l<=r)
    {
        ll m = l+(r-l)/2;
        ll sum = m;
        for(int i = 0;i<n-1;i++)
            sum+=(min(m,a[i+1]-a[i]));
        if(sum<h)
            l = m+1;
        else r = m-1;
    }
    cout<<r+1<<"\n";
    
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
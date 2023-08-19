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
    ll n,m;
    cin>>n>>m;
    ll mn = INT_MAX;
    ll mx = INT_MIN;
    vector<ll>a(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        mn = min(mn,a[i]);
        mx = max(a[i],mx);
    }
    ll ans;
    ll l = mn,r = mx;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        ll sum = 0;
        for(int i =0;i<n;i++)
        {
            if(a[i]>mid)
                sum+= a[i]-mid;
        }
        if(sum<m)
        {
            r = mid-1;
        }
        else
        {
            ans = mid;
            l = mid+1;
        }
    }
    cout<<ans<<"\n";
    
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
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
    int n,c;
    cin>>n>>c;
    vector<ll>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll l = a[0],r = a[n-1];
    ll ans;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        int count = 1;
        int prv = 0;
        for(int i = 1;i<n;i++)
        {
            if(count>=c) break;
            if(a[i]-a[prv]>=mid)
            {
                count++;
                prv = i;
            }
        }
        if(count>=c)
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
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
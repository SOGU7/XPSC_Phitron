#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int n,k;
vector<ll>a;
bool good(ll m)
{
    int count = 1;
    ll sum = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]>m) return false;
        if(sum+a[i]>m)
        {
            count++;
            sum = a[i];
        }
        else
            sum+=a[i];
    }
    return count<=k;
}
void solve()
{
    cin>>n>>k;
    a.resize(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    ll l = 0,r = 1e18;
    while(r>l+1)
    {
        ll mid = l+(r-l)/2;
        if(good(mid))
            r = mid;
        else l = mid;
    } 
    cout<<r<<"\n";
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
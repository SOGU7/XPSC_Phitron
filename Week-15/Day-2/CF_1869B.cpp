#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll n,k,a,b;
vector<pair<ll,ll>>points;
ll getDistance(pair<ll,ll>p,pair<ll,ll>q)
{
    return (abs(p.first-q.first)+ abs(p.second-q.second));
}
ll getMinDistance(pair<ll,ll>a)
{
    ll ans = 1e18;
    for(int i = 0;i<k;i++)
    {
        ans = min(ans,getDistance(a,points[i]));
    }
    return ans;
}
void solve()
{
    cin>>n>>k>>a>>b;
    a--;
    b--;
    points.resize(n);
    for(int i = 0;i<n;i++)
        cin>>points[i].first>>points[i].second;
    ll ans = getDistance(points[a],points[b]);
    if(k>0)
    {
        ans = min(ans,getMinDistance(points[a])+getMinDistance(points[b]));
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
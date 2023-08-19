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
    ll l = 10,r = n;
    ll ans;
    bool flag = true;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        ll temp = mid;
        int sum = 0;
        while(temp>0)
        {
            sum+=(temp%10);
            temp/=10;
        }
        if(mid-sum>=m)
        {
            flag = false;
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    if(flag)
    {
        cout<<0;
        return;
    }
    cout<<(n-ans+1)<<"\n";
}

int main()
{
    fastread();
    int t = 1;
    while(t--)
    {
       solve();
    }
     
    return 0;
}
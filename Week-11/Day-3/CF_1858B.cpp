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
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll>a(m);
    for(int i = 0;i<m;i++) cin>>a[i];
    ll sum = m;
    for(int i = 0;i<m-1;i++)
    {
        ll cur = a[i];
        ll nxt = a[i+1];
        sum+=(nxt-cur-1)/d;
    }
    if(a[0]!=1)
    {
        sum+= (a[0]-2)/d;
        sum++;
    }
    if(a[m-1]!=n)
    {
        sum+=(n-a[m-1])/d;
    }
    // cout<<sum<<"\n";
    vector<ll>con(m);
    ll ans = 1e18;
    for(int i = 1;i<m-1;i++)
    {
        ll tmp = sum;
        ll prv = a[i-1];
        ll cur = a[i];
        ll nxt = a[i+1];
        tmp-=(cur-prv-1)/d;
        tmp-=(nxt-cur-1)/d;
        tmp+=(nxt-prv-1)/d;
        tmp--;
        ans = min(ans,tmp);
        con[i] = tmp;
    }
    {
        ll tmp = sum;
        if(a[0]!=1)
        {
            tmp-=(a[0]-2)/d;
            tmp--;
        }
        tmp-= (a[1]-a[0]-1)/d;
        tmp+= (a[1]-2)/d;
        tmp--;
        tmp++;
        ans = min(ans,tmp);
        con[0] = tmp;
    }
    {
        ll tmp = sum;
        tmp-=(n-a[m-1])/d;
        tmp-=(a[m-1]-a[m-2]-1)/d;
        tmp+=(n-a[m-2])/d;
        tmp--;
        ans = min(ans,tmp);
        con[m-1] = tmp;
    }
    cout<<ans<<" ";
    ll cnt = 0;
    for(int i =0;i<m;i++)
    {
        if(con[i] ==  ans) cnt++;
    }
    cout<<cnt<<"\n";
    
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
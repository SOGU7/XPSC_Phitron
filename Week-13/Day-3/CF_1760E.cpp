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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    ll k = 0;
    ll count1 = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] == 1) k++;
        else count1+=k;
    }
    vector<ll>b(n);
    b = a;
    for(int i = 0;i<n;i++)
    {
        if(b[i] == 0)
        {
            b[i] = 1;
            break;
        }
    }
    ll count2 = 0;
    k = 0;
    for(int i = 0;i<n;i++)
    {
        if(b[i] == 1) k++;
        else count2+=k;
    }
    b = a;
     for(int i = n-1;i>=0;i--)
    {
        if(b[i] == 1)
        {
            b[i] = 0;
            break;
        }
    }
    ll count3 = 0;
    k = 0;
    for(int i = 0;i<n;i++)
    {
        if(b[i] == 1) k++;
        else count3+=k;
    }
    ll ans = max({count1,count2,count3});
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
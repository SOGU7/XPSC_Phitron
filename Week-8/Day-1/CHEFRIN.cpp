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
    int n,a,b;
    cin>>n>>a>>b;
    if(n&1)
    {
        int e = n/2;
        int o = (n/2)+1;
        int ans = (a*e)+(o*b);
        cout<<ans<<"\n";
    }
    else
    {
        int ans = (n/2)*(a+b);
        cout<<ans<<"\n";
    }
    
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
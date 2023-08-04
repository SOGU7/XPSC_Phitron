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
    int n,k;
    cin>>n>>k;
    if(k>30)
    {
        cout<<0<<"\n";
        return;
    }
    int ans  = 0;
    for(int i = 0;i<=n;i++)
    {
        int x = n;
        int y = i;
        bool ok = true;
        for(int j =1;j<=k-2;j++)
        {
            int temp = x-y;
            x = y;
            y = temp;
            if(y>x || y<0)
            {
                ok = false;
                break;
            }
        }
        if(ok) ans++;
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
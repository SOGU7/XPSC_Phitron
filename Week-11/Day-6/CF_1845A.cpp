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
    int n,k,x;
    cin>>n>>k>>x;
    if(x != 1)
    {
        cout<<"YES\n";
        cout<<n<<"\n";
        for(int i = 1;i<=n;i++) cout<<1<<" ";
        cout<<"\n";
    }
    else if(k == 1 || (k == 2 && n%2 == 1))
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        if(n%2 == 0)
        {
            cout<<n/2<<"\n";
            for(int i = 1;i<=n/2;i++)
                cout<<2<<"\n";
        }
        else
        {
            int ans = (n/2);
            cout<<ans<<"\n";
            for(int i = 1;i<=(n/2)-1;i++)
                cout<<2<<" ";
            cout<<3<<"\n";
        }
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
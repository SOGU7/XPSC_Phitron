#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool a[n+1];
    for (int i = 1; i <= n; i++)
    {
        a[i] = (s[i-1] == '1');
    }
    vector<ll>cost(n+1);
    
    for (int i = n; i >= 1; i--)
    {
        for(int j = i;j<=n;j+=i)
        {
            if(a[j] == 1)break;
            cost[j] = i;
        }
        

    }
    ll ans = 0;
    for(int i = 1;i<=n;i++)
    {
        if(a[i] == 0)
            ans+=cost[i];
    }
    cout<<ans<<"\n";
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
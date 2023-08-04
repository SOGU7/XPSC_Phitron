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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0;i < n;i++)
            cin >> a[i];
        pbds<int> p;
        long long ans = 0;
        for (int i = n - 1;i >= 0;i--)
        {
            if (i == (n - 1))
                p.insert(a[i]);
            else
            {
                ans += p.order_of_key(a[i]);
                p.insert(a[i]);
            }
        }
        cout << ans << '\n';
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
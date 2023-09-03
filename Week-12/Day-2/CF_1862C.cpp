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
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i = 1;i<=n;i++) cin>>a[i];
    if(a[1]!=n)
    {
        cout<<"NO\n";
        return;
    }
    vector<int>rot(n+1,0);
    for(int i = 1;i<=n;i++)
        rot[a[i]]++;
    for(int i = n-1;i>=1;i--)
    {
        rot[i]+=rot[i+1];
    }
    if(a == rot) cout<<"YES\n";
    else cout<<"NO\n";
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
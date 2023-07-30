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
    int n,m,k,h;
    cin>>n>>m>>k>>h;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    int ans = 0;
    for(int i =0;i<n;i++)
    {
        int dif = abs(a[i]-h);
        if(dif%k == 0 && dif<=(k*(m-1)) && dif!=0)
            ans++;
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
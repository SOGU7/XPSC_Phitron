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
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    vector<int>dif(n-1);
    for(int i = 1;i<n;i++)
    {
        dif[i-1] = a[i] - a[i-1];
        if(dif[i-1]<0)
        {
            cout<<0<<"\n";
            return;
        }
    }
    int mn = INT_MAX;
    for(auto x: dif)
        mn = min(mn,x);
    int ans = (mn/2)+1;
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
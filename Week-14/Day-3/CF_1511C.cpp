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
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    map<int,int>mp;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        if(mp[a[i]] == 0) mp[a[i]] = i;
    }
    while(q--)
    {
        int x;
        cin>>x;
        int pos = mp[x];
        cout<<mp[x]<<" ";
        for(auto [val , idx] : mp)
        {
            if(idx<pos)
                mp[val]++;
        }    
        mp[x] = 1;
    }
    
}

int main()
{
    fastread();
    int t = 1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}
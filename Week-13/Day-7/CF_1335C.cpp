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
    int mx = -1;
    map<int,int>mp;
    for(int i = 0;i<n;i++) 
    {
        cin>>a[i];
        mp[a[i]]++;
        mx = max(mx,mp[a[i]]);
    }
    if(n == 1)
    {
        cout<<0<<"\n";
        return;    
    }
    set<int>s;
    for(int i = 0;i<n;i++)
        s.insert(a[i]);
    int z = s.size();
    //int rem = n-z;
   // cout<<mx<<" "<<z<<" "<<"\n";
    int ans = max(min(z-1,mx),min(z,mx-1));
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
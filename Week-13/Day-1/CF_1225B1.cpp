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
    int n,k,d;
    cin>>n>>k>>d;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    map<int,int>mp;
    int j = 0,i = 0;
    int count = 0;
    int ans = INT_MAX;
    while(j<n)
    {
        mp[a[j]]++;
        if(mp[a[j]] == 1) count++;
        if(j<d-1)
        {
            j++;
            continue;
        }
        ans = min(ans,count);
        if(mp[a[i]] == 1) count--;
        mp[a[i]]--;
        i++;
        j++;
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
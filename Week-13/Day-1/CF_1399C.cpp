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
    map<int,int>mp;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int mx = INT_MIN;
    for(int i = 2;i<=2*n;i++)
    {
        int count = 0;
        for(auto [val1,val2] : mp)
        {
            int extra = i-val1;
            if(extra>0 && mp.count(extra))
            {
                count+= min(mp[extra],val2);
            }
        }
        count/=2;
        mx = max(mx,count);
    }
    cout<<mx<<"\n";
    
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
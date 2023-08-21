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
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int sum1 = 0;
    vector<int>ans;
    for(int i =0;i<(1<<n);i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i&(1<<j)!=0) ans.push_back(i);
        }
    }
    for(auto val : ans) cout<<val<<"\n";
    
    
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
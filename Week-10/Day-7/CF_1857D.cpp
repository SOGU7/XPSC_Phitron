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
    vector<int>b(n);
    vector<pair<int,int>>c(n);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) cin>>b[i];
    for(int i =0;i<n;i++) 
    {
        c[i].first = a[i]-b[i];
        c[i].second = i+1;
    }
    sort(c.begin(),c.end());
    int mx = c[n-1].first;
    vector<int>ans;
    for(int i =0;i<n;i++)
    {
        if(c[i].first == mx)
        {
            ans.push_back(c[i].second);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto val : ans)
        cout<<val<<" ";
    cout<<"\n";

    
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
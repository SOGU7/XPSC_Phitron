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
    vector<pair<int,int>>a(n+1);
    for(int i =1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    vector<int>ans(n+3,0);
    int count = 0;
    int dis = 1;
    for(int i =1;i<=n;i+=2)
    {
        ans[a[i].second] = 1*dis;
        if(i!=n)
        {
            ans[a[i+1].second] = -1*dis;
        }
        count+= 2*(dis*(a[i].first));
        if(i!=n)
            count+=2*(dis*(a[i+1].first));
        dis++;
    }
    cout<<count<<"\n";
    for(int i =0;i<n+1;i++)
        cout<<ans[i]<<" ";
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
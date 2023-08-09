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
    ll sum = 0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum == 0)
    {
        cout<<"NO\n";
        return;
    }
    else if(sum>0)
    {
        cout<<"YES\n";
        sort(a.begin(),a.end(),greater<int>());
        for(int i =0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<"YES\n";
        sort(a.begin(),a.end());
        for(int i =0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    
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
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
    int mx = INT_MAX;
    for(int i =0;i<n;i++) 
    {
        cin>>a[i];
    }
    int l = 0,r =0;
    while(l<n-1 && a[l]<=a[l+1]) l++;
    while(r<n-1 && a[n-r-1]<=a[n-r-2]) r++;
    if(l+r>=n-1)cout<<"YES\n";
    else cout<<"NO\n";
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
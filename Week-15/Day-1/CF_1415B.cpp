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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    map<int,int>mp;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    } 
    int mx = -1;
    int ans = -1;
    for(auto [idx,val] : mp)
    {
        if(val>ans)
        {
            ans = val;
            mx = idx;
        }
    }
    int i = 0, j = 0;
    bool flag = true;
    int count = 0;
    cout<<mx<<"\n";
    while(j<n)
    {
        if(j-i == k)
        {
            i = j;
            flag = true;
        }
        if(a[j]!= mx && flag &&j<n)
        {
            count++;
            flag = false;
            j++;
         //   cout<<i<<" "<<j<<" "<<count<<"\n";
            continue;
        }
      //  cout<<i<<" "<<j<<" "<<count<<"\n";
        j++;
    }
    cout<<count<<"\n";
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
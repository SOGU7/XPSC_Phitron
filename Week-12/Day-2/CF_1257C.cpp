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
    map<int,int>mp;
    int mx = INT_MIN;
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx = max(mx,mp[a[i]]);
    }
    //cout<<mx<<"\n";
    int count = 0;
    int temp;
    if(mx == 1)
    {
        cout<<-1<<"\n";
        return;
    }
    vector<pair<int,int>>idx;
    for(int i = 0;i<n;i++)
    {
        if(mx == mp[a[i]])
        {
            idx.push_back({a[i],i+1});
        }
    }
    sort(idx.begin(),idx.end());
    int dif;
    int mn = INT_MAX;
    for(int i = 0;i<idx.size()-1;i++)
    {
        if(idx[i].first ==  idx[i+1].first)
        {
            dif = (idx[i+1].second - idx[i].second)+1;
        }
        mn = min(dif,mn);
    }
    cout<<mn<<"\n";
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
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
    string s;
    cin>>s;
    string t = s;
    sort(t.begin(),t.end());
    vector<int>idx;
    for(int i =0;i<n;i++)
    {
        if(s[i]!=t[i]) idx.push_back(i+1);
    }
    if(idx.size() == 0) cout<<0<<"\n";
    else
    {
        cout<<1<<"\n";
        cout<<idx.size()<<" ";
        for(auto val : idx)
            cout<<val<<" ";
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
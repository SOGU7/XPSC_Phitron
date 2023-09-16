#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int n,m;
void right_shift(vector<int>&a,int x)
{
    deque<int>d(a.begin(),a.end());
    for(int i = 0;i<x;i++)
    {
        d.push_front(d.back());
        d.pop_back();
    }
    a = vector<int>(d.begin(),d.end()); 
}
int mex(set<int>&s)
{
    int i = 0;
    while(true)
    {
        if(s.find(i) == s.end())
            return i;
        i++;
    }
}
int grid_mex(vector<vector<int>>&a)
{
    set<int>all;
    for(int i = 0;i<m;i++)
    {
        set<int>cur;
        for(int j = 0;j<n;j++)
        {
            cur.insert(a[j][i]);
        }
        all.insert(mex(cur));
    }
    return mex(all);
}
void solve()
{
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    vector<int>prem;
    for(int i = 0;i<m;i++) prem.push_back(i);
    for(int i = 0;i<n;i++)
        a[i] = prem;
    if(m>1)
    {
        int right = 1;
        for(int i = 0;i<n;i++)
        {
            right_shift(a[i],right);
            if(right == m-1) continue;
            right++;
        }
    }
    cout<<grid_mex(a)<<"\n";
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            cout<<a[i][j]<<" ";
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
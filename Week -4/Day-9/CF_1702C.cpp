#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    map<int,pair<int,int>>mp;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        if(!mp.count(x))
        {
            mp[x].first = i;
            mp[x].second = i;
        }
        else mp[x].second = i;
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(!mp.count(x) or !mp.count(y) or mp[x].first>mp[y].second)
        {
            cout<<"NO\n";
        }
        else cout<<"YES\n";
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
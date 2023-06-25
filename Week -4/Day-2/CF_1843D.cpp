#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const ll N = 2e5+5;
vector<ll>v[N];
ll leaf[N];
bool visited[N];
ll count_leaf(ll src)
{
    visited[src] = true;
    ll ans = 0;
    bool ok = true;
    for(ll i = 0;i<v[src].size();i++)
    {
        if(!visited[v[src][i]])
        {
            ok = false;
            ans+=count_leaf(v[src][i]);
        }
    }
    if(ok) return leaf[src] = 1;
    else return leaf[src] = ans;
}
void solve()
{
    ll n;
    cin>>n;
    ll e = n-1;
    memset(leaf,0,sizeof(leaf));
    memset(visited,false,sizeof(visited));
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll q;
    cin>> q;
    count_leaf(1);
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<leaf[x]*leaf[y]<<"\n";
    }
    for(ll i =1;i<=n;i++)
    {
        v[i].clear();
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
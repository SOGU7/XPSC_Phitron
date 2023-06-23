#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i =0;i<n;i++) cin>>a[i];
    priority_queue<ll>pq;
    ll ans = 0;
    for(ll i =0;i<n;i++)
    {
        if(a[i] == 0 && pq.empty())
            continue;
        else if(a[i]>0)
        {
            pq.push(a[i]);
        }
        else
        {
            ans+=pq.top();
            pq.pop();
        }
    }
    cout<<ans<<"\n";
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
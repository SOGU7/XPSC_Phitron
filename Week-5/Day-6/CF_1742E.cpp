#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>pre(n);
    pre.push_back(0);
    vector<ll>pre_max(n);
    for(int i = 1;i<=n;i++)
    {
        ll x;
        cin>>x;
        pre.push_back(pre.back()+x);
        if(i==1) pre_max.push_back(x);
        else 
            pre_max.push_back(max(pre_max.back(),x));
    }
    for(int i =1;i<=q;i++)
    {
        ll x;
        cin>>x;
        ll ans = upper_bound(pre_max.begin(),pre_max.end(),x) - pre_max.begin();
        cout<<pre[ans]<<" ";
    }
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
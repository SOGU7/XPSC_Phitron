#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>even;
    vector<ll>odd;
    for(ll i =0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x%2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    ll sum1 = 0;
    ll sum2 = 0;
    for(ll i :even) sum1+=i;
    for(ll i : odd) sum2+=i;
    ll n1 = even.size();
    ll n2 = odd.size();
    while(q--)
    {
        ll p,m;
        cin>>p>>m;
        if(p == 0)
        {
            if(m%2!=0)
            {
                n2+=n1;
                sum1+=(n1*m);
                sum2+=sum1;
                n1 = 0;
                sum1 = 0;
            }
            sum1+=(n1*m);
            cout<<sum1+sum2<<"\n"; 
        }
        else
        {
            if(m%2!=0) 
            {
                n1+=n2;
                sum2+=(n2*m);
                sum1+=sum2;
                n2 = 0;
                sum2=0;
            }
            sum2+=(n2*m);
            cout<<sum1+sum2<<"\n";
        }
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
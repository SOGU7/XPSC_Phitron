#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,x,y;
bool good(ll m)
{
    if(m<(min(x,y))) return false;
    ll ans = 1+((m-min(x,y))/x)+((m-(min(x,y)))/y);
    return ans>=n;
}
int main()
{
    cin>>n>>x>>y;
    ll l = 0, r = n*(min(x,y));
    while(r>l+1)
    {
        ll m = l+(r-l)/2;
        if(good(m)) r = m;
        else l = m;
    }
    cout<<r<<"\n";
    return 0;
}
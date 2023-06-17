#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ll count = 0;
    if(b>a) count++;
    if(c>a) count++;
    if(d>a) count++;
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
#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
 
void solve()
{
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a == b) cout<<0<<"\n";
    else if(abs(a-b)>=x) cout<<1<<"\n";
    else
    {
        if(r-max(a,b)>=x || min(a,b)-l>=x)cout<<2<<"\n";
        else if((r-b>=x && a-l>=x)||(r-a>=x && b-l>=x)) cout<<3<<"\n";
        else cout<<-1<<"\n";
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
#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans1 = a-1;
    int ans2;
    if(c == 1) ans2 = b-c;
    else ans2 = abs(b-c)+(c-1);
    if(ans1>ans2) cout<<2<<"\n";
    else if(ans1<ans2) cout<<1<<"\n";
    else cout<<3<<"\n";
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
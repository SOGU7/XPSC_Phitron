#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    int ext = 0;
    if(y>x)
        ext = y-x;
    int ans = (y-ext) + (ext*2);
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
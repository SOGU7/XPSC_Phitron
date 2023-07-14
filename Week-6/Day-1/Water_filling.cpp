#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((!(a&b))&(!(b&c))&(!(a&c))) cout<<"Water filling time\n";
    else cout<<"Not now\n";
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
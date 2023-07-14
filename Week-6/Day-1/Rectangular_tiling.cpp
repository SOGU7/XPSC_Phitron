#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int m,n;
	    cin>>m>>n;
	    int cnt = 0;
	    if(!(m&1)) cnt++;
	    if(!(n&1)) cnt++;
	    if(cnt>0) cout<<"YES\n";
	    else cout<<"NO\n";
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
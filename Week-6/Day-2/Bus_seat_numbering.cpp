#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n<=10) cout<<"Lower Double\n";
    else if(n<=15) cout<<"Lower Single\n";
    else if(n<=25) cout<<"Upper Double\n";
    else cout<<"Upper Single\n";
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
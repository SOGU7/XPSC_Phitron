#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%4 != 0)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    n/=2;
    for(int i =1;i<=n;i++) cout<<i*2<<" ";
    for(int i =1;i<=n-1;i++) cout<<2*i-1<<" ";
    cout<<3*n-1<<"\n";
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
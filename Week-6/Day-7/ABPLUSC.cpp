#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n>1)
    {
        if(n<1000000)
            cout<<1<<" "<<1<<" "<<n-1<<"\n";
        else if(n>1000000 && (n%1000000)!=0)
        {
            cout<<1000000<<" "<<(n/1000000)<<" "<<(n%1000000)<<"\n";
        }
        else
            cout<<1000000<<" "<<(n/1000000)-1<<" "<<1000000<<"\n";

    }
    else cout<<-1<<"\n";
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
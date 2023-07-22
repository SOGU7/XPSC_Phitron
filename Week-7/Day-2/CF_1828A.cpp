#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n&1)
    {
        for(int i = 1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    else
    {
        for(int i =1;i<=n;i++)
            cout<<2*i<<" ";
        cout<<"\n";
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
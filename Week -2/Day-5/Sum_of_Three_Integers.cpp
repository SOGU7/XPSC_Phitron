#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int k,s;
    cin>>k>>s;
    ll count = 0;
    for(int i = 0;i<=k;i++)
    {
        for(int j = 0;j<=k;j++)
        {
            int z = s-i-j;
            if(z<=k && z>=0) count++;
        }
    }
    cout<<count;
}

int main()
{
    fastread();
    solve();
    return 0;
}
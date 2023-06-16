#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int count = 0;
    while(n--)
    {
        int t;
        cin>>t;
        if(t%k == 0) count++;
    }
    cout<<count;
}

int main()
{
    fastread();
    solve();
     
    return 0;
}
#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,s,r;
    cin>>n>>s>>r;
    cout<<s-r<<" ";
    int val = s-r;
    for(int i = 2;i<=n;i++)
    {
        while(r-val<n-i)
            val--;
        cout<<val<<" ";
        r = r-val;
    }
    cout<<"\n";
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
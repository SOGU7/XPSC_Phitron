#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i = n/2;i>=1;i--)
        cout<<i<<" ";
    for(int i = (n/2)+1;i<=n;i++)
        cout<<i<<" ";
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
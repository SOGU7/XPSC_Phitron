#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    x = x-z;
    int count = 1;
    while(x>0)
    {
        x-=y;
        count++;
    }
    cout<<count<<"\n";

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